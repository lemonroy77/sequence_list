/*.���Ա�(a1,a2,a3,��,an)�е�Ԫ�ص��������Ұ�˳��洢�ڼ�����ڡ�Ҫ�����һ���㷨��
 ���������ʱ���ڱ��в�����ֵΪx��Ԫ�أ����ҵ�����������Ԫ��λ���ཻ����
  ���Ҳ��������������в�ʹ����Ԫ���Ե�������*/
#include "sequlist.h"
void SearchExchangeInsert(SeqList &L, int n, int x) {
    int low = 0, high = n - 1, mid; // low��highָ��˳����½���Ͻ���±�
    int i, t;
    while (low <= high) {
        mid = (low + high) / 2; // ���м�λ��
        if (L.data[mid] == x) {
            break; // �ҵ� x���˳� while ѭ��
        } else if (L.data[mid] < x) {
            low = mid + 1; // ���е� mid ���Ұ벿ȥ��
        } else {
            high = mid - 1; // ���е� mid ����벿ȥ��
        }
    }
    if (L.data[mid] == x && mid != n - 1) { // �����һ��Ԫ����x��ȣ��򲻴��������̽����Ĳ���
        t = L.data[mid];
        L.data[mid] = L.data[mid + 1];
        L.data[mid + 1] = t;
    }
    if (low > high) { // ����ʧ�ܣ���������Ԫ��x
        for (i = n - 1; i > high; i--) {
            L.data[i + 1] = L.data[i]; // ����Ԫ��
        }
        L.data[i+1] = x; // ���� x
        L.length++;
    }
}
/*void insert(SeqList&L,int x) {
    int i, temp;
    for (i = 0; i < L.length; i++) {
        if (L.data[i] == x) {
            temp = L.data[i];
            L.data[i] = L.data[i + 1];
            L.data[i + 1] = temp;
        return;}
    else if (L.data[i] > x) {
            break;
        }
    }
    for(int j=L.length;j>i;j--){
        L.data[j]=L.data[j-1];
    }
    L.data[i]=x;
    L.length++;
}*/
int main() {
    SeqList L;
    int x;
    printf("��������ԭ˳���\n");
    input(L);
    printf("������Ҫ�����Ԫ�أ�");
    scanf("%d", &x);
    SearchExchangeInsert(L, L.length, x);
    printf("������˳���\n");
    print(L);
    return 0;
}
