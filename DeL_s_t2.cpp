/*.������˳�����ɾ����ֵ�ڸ���ֵs��t֮��(����s,t)(Ҫ��s<t)������Ԫ�أ���s��t������
��˳���Ϊ�գ�����ʾ������Ϣ���˳����С�*/
#include "sequlist.h"
bool del_s_t2(SeqList &L,int s,int t){
     int i,j;
     if(s>=t||L.length==0)
         return false;
     for(i=0;i<=L.length&&L.data[i]<s;i++);
     if(i>L.length)  return false;
     for(j=i;j<=L.length&&L.data[j]<=t;j++);
     for(;j<L.length;i++,j++)
         L.data[i]=L.data[j];
     L.length=i;
     return true;
}
int main() {
    SeqList L;
    int s, t;
    input(L);
    printf("ԭ˳���Ϊ��\n");
    print(L);
    printf("������Ҫɾ���ķ�Χ (s �� t)��\n");
    scanf("%d %d", &s, &t);
    if (del_s_t2(L, s, t)) {
        printf("ɾ����Χ�ڵ�Ԫ�غ��˳���Ϊ��\n");
        print(L);
    } else {
        printf("��Χ��Ч��˳���Ϊ�գ��޷�ɾ��Ԫ�ء�\n");
    }
    return 0;
}
