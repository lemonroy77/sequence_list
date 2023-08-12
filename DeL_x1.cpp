/*.对长度为L的顺序表Z,编写一个时间复杂度为O(n)、空间复杂度为o(1)的算法，该算
法删除线性表中所有值为x的数据元素。*/
#include "sequlist.h"
void del_x1(SeqList &L,int x){
    int k=0,i;
   while(i<L.length){
       if(L.data[i]==x)
           k++;
       else
           L.data[i-k]=L.data[i];
           i++;
   }
    L.length-=k;
}
int main(){
        SeqList L;
        int x;
        input(L);
        printf("原顺序表为：\n");
        print(L);
        printf("请输入要删除的元素：\n");
        scanf("%d", &x);
        del_x1(L, x);
        printf("删除元素后的顺序表为：\n");
        print(L);
        return 0;
}