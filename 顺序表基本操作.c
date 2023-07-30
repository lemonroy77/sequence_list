#include<stdio.h>
#include<stdlib.h>
#define Maxsize 10
typedef struct {
    int* data;
    int length;
}SeqList;
void InitList(SeqList& L);//初始化线性表
bool ListInsert(SeqList& L, int i, int e);//插入
bool ListDelete(SeqList& L, int i, int &e);//删除
int GetElem(SeqList L, int i);//按位查找
int LocateElem(SeqList L, int e);//按值查找
void PrintList(SeqList L);//打印顺序表
void InitList(SeqList &L){
    L.data=(int*)malloc(sizeof(int)*Maxsize);
    L.length=0;
}
bool ListInsert(SeqList &L, int i, int e){//插入
    if(i<1||i>L.length+1) return false;
    if(L.length>=Maxsize) return false;
    for(int j=L.length;j>=i;j--)
      L.data[j]=L.data[j-1];
    L.data[i-1]=e;
    L.length++;
    return true;
}
bool ListDelete(SeqList &L, int i, int &e){//删除
    if(i<1||i>L.length) return false;
   for(int j=i;j<L.length;j++)
       L.data[j-1]=L.data[j];
      e=L.data[i-1];
      L.length--;
      return true;
}
int GetElem(SeqList L, int i){//按位查找
   if(i<1||i>L.length) return -1;
   return L.data[i-1];}
int LocateElem(SeqList L, int e){//按值查找
 for(int i=0;i<L.length;i++)
     if(L.data[i]==e)
         return i+1;
 return -1;
 }
 void PrintList(SeqList L){
    for(int i=0;i<L.length;i++){
        printf("%d\t",L.data[i]);
    }
}
int main(){
    SeqList L;
    int e;
    InitList(L);
    ListInsert(L,1,3);
    ListInsert(L,1,2);
    ListInsert(L,1,1);
    ListDelete(L,1,e);
    PrintList(L);
    return 0;
}