#include <stdio.h>

int search(int* A, int size, int serch_value);

int main(void)
{
    int A[]={400, 340, 200, 150, 210, 430, 200}; //������ ������ ����� �迭
    int size=sizeof(A)/sizeof(A[0]); //�迭A�� size
    int serch_value=200; //ã�� ���� ��=200����
    search(A,size,serch_value);
    return 0;
}

int search(int* A, int size, int serch_value)
{
    int count=0; //������ 200������ ����� ã���� �� ������� ���� ���� count����
    for(int i=0; i<size;i++)
        if(A[i]==serch_value)
            count++;
    printf("������ 200������ ����� �ε���=%d\n", count);

}