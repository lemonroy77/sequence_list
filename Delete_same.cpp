/*������˳�����ɾ��������ֵ�ظ���Ԫ�أ�ʹ��������Ԫ�ص�ֵ����ͬ*/
#include "sequlist.h"
bool Delete_Same(SeqList &L){
   if(L.length==0)
       return false;
   int i,j;
   for(i=0,j=1;j<L.length;j++)
       if(L.data[i]!=L.data[j])
           L.data[++i]=L.data[j];
       L.length=i+1;
}
int main() {
        SeqList L;
        input(L);
        printf("ԭ˳���Ϊ��\n");
        print(L);
        if (Delete_Same(L)) {
            printf("ɾ���ظ�Ԫ�غ��˳���Ϊ��\n");
            print(L);
        } else {
            printf("˳���Ϊ�գ��޷�ɾ��Ԫ�ء�\n");
        }
        return 0;
    }