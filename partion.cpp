/*���дһ���㷨����partion(sequence_list *L)�������ܿ�ؽ�˳���L�е��������������������ߣ�
����ż������������ұ�*/
#include "sequlist.h"
void partion(SeqList &L)
{
    int i,j,x;
    i=0;
    j=L.length-1;
    do
    {
        while (i<j && L.data[i]%2==1 )//��ָ�������ƶ����ҵ���һ��ż��
            i++;
        while (i<j && L.data[j]%2==0)// ��ָ�������ƶ����ҵ���һ������
            j--;
        if (i<j)
        {
            x=L.data[i];
            L.data[i++]=L.data[j];
            L.data[j--]=x;
        }
    }while (i<j);
}
/*void partition(SeqList &L) {
    int left = 0;  // ��ָ��
    int right = L.length - 1;  // ��ָ��

    while (left < right) {
        // ��ָ�������ƶ����ҵ���һ��ż��
        while (left < right && L.data[left] % 2 != 0) {
            left++;
        }

        // ��ָ�������ƶ����ҵ���һ������
        while (left < right && L.data[right] % 2 == 0) {
            right--;
        }

        // ��������ָ����ָ��Ԫ��
        int temp = L.data[left];
        L.data[left] = L.data[right];
        L.data[right] = temp;
    }
}*/
int main()
{
    SeqList L;
    input(L);
    print(L);  						/*�����L*/
    partion(L);
    print(L);  						/*����±�*/
    return 0;
}
