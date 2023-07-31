/*已知顺序表L1，L2中数据由小到大有序，请用尽可能快的方法将L1与L2中的数据合并到L3中，使数据在L3中按升序排列。*/
#include "sequlist.h"
void merge(SeqList& L1,SeqList& L2, SeqList& L3)
{
    int i, j, k;
    i = j = k = 0;
    while (i < L1.length && j < L2.length)
    {
        if (L1.data[i] < L2.data[j])
            L3.data[k++] = L1.data[i++];
        else
            L3.data[k++] = L2.data[j++];
    }
    while (i < L1.length)
        L3.data[k++] = L1.data[i++];
    while (j < L2.length)
        L3.data[k++] = L2.data[j++];
    L3.length = k;

}
int main()
{
    SeqList L1, L2, L3;
    input(L1);				/*输入时请输入有序数据*/
    input(L2);				/*输入时请输入有序数据*/
    merge(L1, L2, L3);		/*合并数据到L3*/
    print(L3);				/*输出L3*/
}
