/*.�Գ���ΪL��˳���Z,��дһ��ʱ�临�Ӷ�ΪO(n)���ռ临�Ӷ�Ϊo(1)���㷨������
��ɾ�����Ա�������ֵΪx������Ԫ�ء�*/
#include "sequlist.h"
void del_x1(SeqList &L,int x){
    int k=0,i;
    for(i=0;i<L.length;i++)
        if(L.data[i]!=x){
            L.data[k]=L.data[i];
            k++;
        }
    L.length=k;
}
int main(){
        SeqList L;
        int x;
        input(L);
        printf("ԭ˳���Ϊ��\n");
        print(L);
        printf("������Ҫɾ����Ԫ�أ�\n");
        scanf("%d", &x);
        del_x1(L, x);
        printf("ɾ��Ԫ�غ��˳���Ϊ��\n");
        print(L);
        return 0;
}