#include <stdio.h>

//c��� express 11�� ������ - 6��: �迭 ����

void array_copy(int* A, int* B, int size);

int main(void)
{
    int a[10] = {1,2,3,4,0,0,0,0,0,0 };
    int b[10] = {0};
    array_copy(a, b, 10);
    return 0;
}

void array_copy(int* A, int* B, int size)
{
    //���� �迭a�� �����ֱ�
    printf("A[ ] = { ");
    for(int i=0;i<size;i++)
        printf("%d ", A[i]);
    printf(" }\n");
    
    //a�� b�� �ű��
    printf("A[ ] = { ");
    for(int i=0;i<size;i++)
    {
        B[i] = A[i];
        printf("%d ", B[i]);
    }
    printf(" }\n");

}