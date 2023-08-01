/*假设顺序表la与lb分别存放两个整数集合，函数inter(SeqList &la,SeqList &lb,SeqList &lc)
的功能是实现求顺序表la与lb的交集存放到顺序表lc中,请将函数补充完整.  */
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
    /* InitList(lc);  // 初始化顺序表lc
    for (int i = 0; i < la.length; i++) {
        bool found = false;  // 标记是否找到交集元素
        for (int j = 0; j < lb.length; j++) {
            if (la.data[i] == lb.data[j]) {
                found = true;
                break;
            }
        }
        if (found) {
            lc.data[lc.length++] = la.data[i];  // 将交集元素添加到顺序表lc中
        }
    }
}*/

int main()
{
    SeqList la,lb,lc;
    input(la);
    input(lb);
    printf("输入的两组数分别为：\n");
    print(la); 				 	    /*输出la
    print(lb);  				    /*输出lb*/
    inter(la,lb,lc);   		/*求la与lb的交集存于lc中*/
    printf("两组数的交集为：");
    print(lc); 					    /*输出lc*/
    return 0;
}
