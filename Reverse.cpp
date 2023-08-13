/*已知在一维数组中依次存放两个线性表(a1,a2,a3,…,am)和(b1,b2,b3,…,bn)。编写一
个函数，将数组中两个顺序表的位置互换，即将(b1,b2,b3,…,bn)放在(a1,a2,a3,…,am)的前面。*/
#include "sequlist.h"
typedef int DataType;
bool Reverse(DataType A[],int left,int right,int arraySize){
    if(left>=right||right>=arraySize)
        return false;
    int mid=(left+right)/2;
    for(int i=0;i<mid-left;i++){
        DataType temp=A[left+i];
        A[left+i]=A[right-i];
        A[right-i]=temp;
    }
    return true;
}
void Exchange(DataType A[],int m,int n,int arraySize){
    Reverse(A,0,m+n-1,arraySize);
    Reverse(A,0,n-1,arraySize);
    Reverse(A,n,m+n-1,arraySize);
}
int main() {
    SeqList L;
    printf("请输入原顺序表的长度：\n");
    scanf("%d", &L.length);
    printf("请输入原顺序表的数据：\n");
    input(L);
    int m, n;  // 分别表示两个顺序表的长度
    printf("请输入第一个顺序表的长度（m）：\n");
    scanf("%d", &m);
    printf("请输入第二个顺序表的长度（n）：\n");
    scanf("%d", &n);
    printf("交换前的数组为：\n");
    print(L);
    Exchange(L.data, m, n, L.length);
    printf("交换后的数组为：\n");
    print(L);
    return 0;
}


