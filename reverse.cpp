/*基于sequlist.h中定义的顺序表，编写算法函数reverse(sequence_list &L)，实现顺序表的就地倒置。*/
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
    printf("原顺序表为：");
    print(L);
    reverse(L);
    printf("新顺序表为：");
    print(L);
}