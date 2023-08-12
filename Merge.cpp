/*将两个有序顺序表合并为一个新的有序顺序表，并由函数返回结果顺序表。*/
#include "sequlist.h"
bool merge(SeqList A, SeqList B, SeqList &C) {
    if(A.length + B.length > C.length)
        return false;
    int i = 0, j = 0, k = 0;
    while(i < A.length && j < B.length) {
        if(A.data[i] < B.data[j])
            C.data[k++] = A.data[i++];
        else
            C.data[k++] = B.data[j++];
    }
    while(i < A.length)
        C.data[k++] = A.data[i++];
    while(j < B.length)
        C.data[k++] = B.data[j++];
    C.length = k;
    return true;
}
int main() {
    SeqList A, B, C;
    printf("请输入第一个有序顺序表：\n");
    input(A);
    printf("请输入第二个有序顺序表：\n");
    input(B);
    printf("合并前的顺序表 A 为：\n");
    print(A);
    printf("合并前的顺序表 B 为：\n");
    print(B);
    if (merge(A, B, C)) {
        printf("合并后的顺序表 C 为：\n");
        print(C);
    } else {
        printf("顺序表 C 的长度不足，无法合并。\n");
    }
    return 0;
}