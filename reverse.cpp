/*����sequlist.h�ж����˳�����д�㷨����reverse(sequence_list &L)��ʵ��˳���ľ͵ص��á�*/
#include"sequlist.h"
void reverse(SeqList &L){
    int i;
    for (i = 0;i <L.length/2;i++)
    {
        int temp;
        temp = L.data[i];
        L.data[i] = L.data[L.length - i - 1];
        L.data[L.length - i - 1] = temp;
    }
}
int main() {
    SeqList L;
    input(L);
    printf("ԭ˳���Ϊ��");
    print(L);
    reverse(L);
    printf("��˳���Ϊ��");
    print(L);
}