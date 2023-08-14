/*.线性表(a1,a2,a3,…,an)中的元素递增有序且按顺序存储于计算机内。要求设计一个算法，
 完成用最少时间在表中查找数值为x的元素，若找到，则将其与后继元素位置相交换，
  若找不到，则将其插入表中并使表中元素仍递增有序*/
#include "sequlist.h"
void SearchExchangeInsert(SeqList &L, int n, int x) {
    int low = 0, high = n - 1, mid; // low和high指向顺序表下界和上界的下标
    int i, t;
    while (low <= high) {
        mid = (low + high) / 2; // 找中间位置
        if (L.data[mid] == x) {
            break; // 找到 x，退出 while 循环
        } else if (L.data[mid] < x) {
            low = mid + 1; // 到中点 mid 的右半部去查
        } else {
            high = mid - 1; // 到中点 mid 的左半部去查
        }
    }
    if (L.data[mid] == x && mid != n - 1) { // 若最后一个元素与x相等，则不存在与其后继交换的操作
        t = L.data[mid];
        L.data[mid] = L.data[mid + 1];
        L.data[mid + 1] = t;
    }
    if (low > high) { // 查找失败，插入数据元素x
        for (i = n - 1; i > high; i--) {
            L.data[i + 1] = L.data[i]; // 后移元素
        }
        L.data[i+1] = x; // 插入 x
        L.length++;
    }
}
/*void insert(SeqList&L,int x) {
    int i, temp;
    for (i = 0; i < L.length; i++) {
        if (L.data[i] == x) {
            temp = L.data[i];
            L.data[i] = L.data[i + 1];
            L.data[i + 1] = temp;
        return;}
    else if (L.data[i] > x) {
            break;
        }
    }
    for(int j=L.length;j>i;j--){
        L.data[j]=L.data[j-1];
    }
    L.data[i]=x;
    L.length++;
}*/
int main() {
    SeqList L;
    int x;
    printf("请先输入原顺序表：\n");
    input(L);
    printf("请输入要插入的元素：");
    scanf("%d", &x);
    SearchExchangeInsert(L, L.length, x);
    printf("插入后的顺序表：\n");
    print(L);
    return 0;
}
