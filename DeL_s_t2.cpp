/*.从有序顺序表中删除其值在给定值s与t之间(包括s,t)(要求s<t)的所有元素，若s或t不合理
或顺序表为空，则显示出错信息并退出运行。*/
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
    printf("原顺序表为：\n");
    print(L);
    printf("请输入要删除的范围 (s 和 t)：\n");
    scanf("%d %d", &s, &t);
    if (del_s_t2(L, s, t)) {
        printf("删除范围内的元素后的顺序表为：\n");
        print(L);
    } else {
        printf("范围无效或顺序表为空，无法删除元素。\n");
    }
    return 0;
}
