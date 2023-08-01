/*请编写一个算法函数partion(sequence_list *L)，尽可能快地将顺序表L中的所有奇数调整到表的左边，
所有偶数调整到表的右边*/
#include "sequlist.h"
void partion(SeqList &L)
{
    int i,j,x;
    i=0;
    j=L.length-1;
    do
    {
        while (i<j && L.data[i]%2==1 )//左指针向右移动，找到第一个偶数
            i++;
        while (i<j && L.data[j]%2==0)// 右指针向左移动，找到第一个奇数
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
    int left = 0;  // 左指针
    int right = L.length - 1;  // 右指针

    while (left < right) {
        // 左指针向右移动，找到第一个偶数
        while (left < right && L.data[left] % 2 != 0) {
            left++;
        }

        // 右指针向左移动，找到第一个奇数
        while (left < right && L.data[right] % 2 == 0) {
            right--;
        }

        // 交换左右指针所指的元素
        int temp = L.data[left];
        L.data[left] = L.data[right];
        L.data[right] = temp;
    }
}*/
int main()
{
    SeqList L;
    input(L);
    print(L);  						/*输出表L*/
    partion(L);
    print(L);  						/*输出新表*/
    return 0;
}
