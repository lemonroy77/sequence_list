/*����˳���la��lb�ֱ��������������ϣ�����inter(SeqList &la,SeqList &lb,SeqList &lc)
�Ĺ�����ʵ����˳���la��lb�Ľ�����ŵ�˳���lc��,�뽫������������.  */
#include "sequlist.h"
void inter(SeqList &la, SeqList &lb, SeqList &lc) {
    int i,j,k=0;
    for(i=0;i<la.length;i++){
        j=0;
    while(j<lb.length&&la.data[i]!=lb.data[j])
        j++;
        if(j<lb.length){
            lc.data[k]=lb.data[j];
            k++;
        }
    }
    lc.length=k;
}
    /* InitList(lc);  // ��ʼ��˳���lc
    for (int i = 0; i < la.length; i++) {
        bool found = false;  // ����Ƿ��ҵ�����Ԫ��
        for (int j = 0; j < lb.length; j++) {
            if (la.data[i] == lb.data[j]) {
                found = true;
                break;
            }
        }
        if (found) {
            lc.data[lc.length++] = la.data[i];  // ������Ԫ����ӵ�˳���lc��
        }
    }
}*/

int main()
{
    SeqList la,lb,lc;
    input(la);
    input(lb);
    printf("������������ֱ�Ϊ��\n");
    print(la); 				 	    /*���la
    print(lb);  				    /*���lb*/
    inter(la,lb,lc);   		/*��la��lb�Ľ�������lc��*/
    printf("�������Ľ���Ϊ��");
    print(lc); 					    /*���lc*/
    return 0;
}
