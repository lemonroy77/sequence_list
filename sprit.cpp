/*��дһ���㷨����void sprit( sequence_list &L1,sequence_list &L2,sequence_list &L3)��
��˳���L1�е����ݽ��з��࣬������ŵ��浽˳���L2�У�ż���浽˳���L3�У���дmain()���в��ԡ�*/
#include "sequlist.h"
void sprit(SeqList &L1,SeqList &L2,SeqList &L3)
{
    int i = 0;
    InitList(L2);
    InitList(L3);
    for (i = 0;i < L1.length;i++)
    {
        if (L1.data[i] % 2)
            L2.data[(L2.length)++] = L1.data[i];
        if (L1.data[i] % 2 == 0)
            L3.data[(L3.length)++] = L1.data[i];
    }
}
int main()
{
    SeqList L1, L2, L3;
    input(L1);
    sprit(L1,L2,L3);
    printf("�����һ����Ϊ��");
    print(L1);
    printf("������L2Ϊ��    ");
    print(L2);
    printf("ż����L3Ϊ��    ");
    print(L3);
    system("pause");
}
