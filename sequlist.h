#include<stdio.h>
#include<stdlib.h>
#define Maxsize 100
typedef struct {
    int data[Maxsize];
    int length;
}SeqList;
void InitList(SeqList &L){
    L.length=0;
}
void input(SeqList &L){
    int x;
    InitList(L);
    printf("请输入一组数据：\n");
    while(scanf("%d",&x)!=EOF){
        L.data[L.length++]=x;
        if (getchar() == '\n')
            break;
    }
}
void print(SeqList &L){
    int i;
    for(i=0;i<L.length;i++)
        printf("%3d",L.data[i]);
    printf("\n");
}
