/*��֪��һά���������δ���������Ա�(a1,a2,a3,��,am)��(b1,b2,b3,��,bn)����дһ
��������������������˳����λ�û���������(b1,b2,b3,��,bn)����(a1,a2,a3,��,am)��ǰ�档*/
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
    printf("������ԭ˳���ĳ��ȣ�\n");
    scanf("%d", &L.length);
    printf("������ԭ˳�������ݣ�\n");
    input(L);
    int m, n;  // �ֱ��ʾ����˳���ĳ���
    printf("�������һ��˳���ĳ��ȣ�m����\n");
    scanf("%d", &m);
    printf("������ڶ���˳���ĳ��ȣ�n����\n");
    scanf("%d", &n);
    printf("����ǰ������Ϊ��\n");
    print(L);
    Exchange(L.data, m, n, L.length);
    printf("�����������Ϊ��\n");
    print(L);
    return 0;
}


