/*从有序顺序表中删除所有其值重复的元素，使表中所有元素的值均不同*/
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
        printf("原顺序表为：\n");
        print(L);
        if (Delete_Same(L)) {
            printf("删除重复元素后的顺序表为：\n");
            print(L);
        } else {
            printf("顺序表为空，无法删除元素。\n");
        }
        return 0;
    }