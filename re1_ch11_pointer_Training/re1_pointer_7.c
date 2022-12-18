#include <stdio.h>

void arr_add(int* A, int* B, int* C, int size); //�迭���� ���ϴ� �Լ� A+B=C

int main(void)
{
    int A[]={100,240,400,500,600,800}; //�������� ������ ����� �迭A
    int B[]={10,30,62,96,100,340}; //�������� ���ʽ��� ����� �迭B
    int C[]={0}; //�迭 A,B ���ؼ� ����� �迭C

    int size=sizeof(A)/sizeof(A[0]);// 24byte/4byte
    arr_add(A,B,C,size); 
    return 0;
}

void arr_add(int* A, int* B, int* C, int size) //�迭���� ���ϴ� �Լ� A+B=C
{
    //�迭A(����) �����ֱ�
    printf("A[]={ ");
    for(int i=0; i<size; i++)
        printf("%d ", *(A+i));
    printf(" }\n");

    //�迭B(���ʽ�) �����ֱ�
    printf("B[]={ ");
    for(int i=0; i<size; i++)
        printf("%d ", *(B+i));
    printf(" }\n");

    //�迭C(����+���ʽ�) �����ֱ�
    printf("C[]={ ");
    for(int i=0; i<size; i++)
    {
        C[i]=*(A+i)+*(B+i); 
        printf("%d ", C[i]);
    }
    printf(" }\n");
}