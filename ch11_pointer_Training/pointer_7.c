#include <stdio.h>
//c��� express 11�� ������ - 7��: �迭 ���� 3���ϱ�

void array_copy(int* A, int* B, int* C, int size);

int main(void)
{
    int a[10] = {1,6,3,4,0,0,0,0,9,0 }; //a���� �⺻��
    int b[10] = {1,3,3,1,0,0,0,6,9,4 }; //b���� ���ʽ�
    int c[10] = {0}; //c���� a+b

    array_copy(a, b, c, 10);
    
    return 0;
}

void array_copy(int* A, int* B, int* C, int size)
{
    //�⺻�� �迭A �����ֱ�
    printf("A[ ] = { ");
    for(int i=0;i<size;i++)
        printf("%d ", A[i]);
    printf(" }\n");

    //���ʽ� �迭B �����ֱ�
    printf("B[ ] = { ");
    for(int i=0;i<size;i++)
        printf("%d ", B[i]);
    printf(" }\n");
    
    //�հ� �迭C �����ֱ�
    printf("C[ ] = { ");
    for(int i=0;i<size;i++)
    {
        C[i] = A[i] + B[i];
        printf("%d ", C[i]);
    }
    printf(" }\n");

}