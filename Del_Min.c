/*��˳�����ɾ��������Сֵ��Ԫ��(����Ψһ)���ɺ������ر�ɾԪ�ص�ֵ���ճ���λ
�������һ��Ԫ�������˳���Ϊ�գ�����ʾ������Ϣ���˳����С�*/
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
bool ListInsert(SeqList &L, int i, int e){//����
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
    // ɾ����Сֵ
    ElemType minValue;
    Del_Min(L, minValue);
    if(Del_Min(L, minValue)){
    printf("ɾ������Сֵ��%d\n", minValue);
    printf("ɾ��������Ա�");
    for (int i = 0; i < L.length; i++) {
        printf("%d ", L.data[i]);
    }
    printf("\n");}
    else{
        printf("���Ա�Ϊ�գ��޷�ɾ����Сֵ��\n");
    }
    return 0;
}
