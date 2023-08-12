/*从顺序表中删除具有最小值的元素(假设唯一)并由函数返回被删元素的值。空出的位
置由最后一个元素填补，若顺序表为空，则显示出错信息并退出运行。*/
#include <stdio.h>
#include<stdlib.h>
#define Maxsize 50
typedef int ElemType;
typedef struct {
    ElemType* data;
    int length;
} SeqList;

void InitList(SeqList& L) {
    L.data = (ElemType*)malloc(sizeof(ElemType) * Maxsize);
    L.length = 0;
}
bool ListInsert(SeqList &L, int i, int e){//插入
    if(i<1||i>L.length+1) return false;
    if(L.length>=Maxsize) return false;
    for(int j=L.length;j>=i;j--)
        L.data[j]=L.data[j-1];
    L.data[i-1]=e;
    L.length++;
    return true;
}
bool Del_Min(SeqList& L, ElemType& value) {
    if (L.length == 0)
        return false;
    value = L.data[0];
    int pos = 0;
    for (int i = 1; i < L.length; i++)
        if (L.data[i] < value) {
            value = L.data[i];
            pos = i;
        }
    L.data[pos] = L.data[L.length - 1];
    L.length--;
    return true;
}

int main() {
    SeqList L;
    InitList(L);
    ListInsert(L, 1, 3);
    ListInsert(L, 1, 2);
    ListInsert(L, 1, 1);
    // 删除最小值
    ElemType minValue;
    Del_Min(L, minValue);
    if(Del_Min(L, minValue)){
    printf("删除的最小值：%d\n", minValue);
    printf("删除后的线性表：");
    for (int i = 0; i < L.length; i++) {
        printf("%d ", L.data[i]);
    }
    printf("\n");}
    else{
        printf("线性表为空，无法删除最小值。\n");
    }
    return 0;
}
