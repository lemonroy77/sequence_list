/*编写一个算法函数void sprit( sequence_list &L1,sequence_list &L2,sequence_list &L3)，
将顺序表L1中的数据进行分类，奇数存放到存到顺序表L2中，偶数存到顺序表L3中，编写main()进行测试。*/
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
    printf("输入的一组数为：");
    print(L1);
    printf("奇数表L2为：    ");
    print(L2);
    printf("偶数表L3为：    ");
    print(L3);
    system("pause");
}
