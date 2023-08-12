/*����������˳���ϲ�Ϊһ���µ�����˳������ɺ������ؽ��˳���*/
#include "sequlist.h"
bool merge(SeqList A, SeqList B, SeqList &C) {
    if(A.length + B.length > C.length)
        return false;
    int i = 0, j = 0, k = 0;
    while(i < A.length && j < B.length) {
        if(A.data[i] < B.data[j])
            C.data[k++] = A.data[i++];
        else
            C.data[k++] = B.data[j++];
    }
    while(i < A.length)
        C.data[k++] = A.data[i++];
    while(j < B.length)
        C.data[k++] = B.data[j++];
    C.length = k;
    return true;
}
int main() {
    SeqList A, B, C;
    printf("�������һ������˳���\n");
    input(A);
    printf("������ڶ�������˳���\n");
    input(B);
    printf("�ϲ�ǰ��˳��� A Ϊ��\n");
    print(A);
    printf("�ϲ�ǰ��˳��� B Ϊ��\n");
    print(B);
    if (merge(A, B, C)) {
        printf("�ϲ����˳��� C Ϊ��\n");
        print(C);
    } else {
        printf("˳��� C �ĳ��Ȳ��㣬�޷��ϲ���\n");
    }
    return 0;
}