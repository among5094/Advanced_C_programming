#include <stdio.h>//c��� express 11�� ������ - 8��: ������ ������ �Ѿ�

void array_sum(int* A, int size);

int main(void)
{
    int a[10] = {220, 240, 260, 280, 300, 320, 340, 380, 400, 300 };
    array_sum(a, 10);
    return 0;
}

void array_sum(int* A, int size)
{
    //���� �迭a�� �����ֱ�
    printf("A[ ] = { ");
    for(int i=0;i<size;i++)
        printf("%d ", A[i]);
    printf(" }\n");
    
    int sum = 0;
    for(int i=0;i<size;i++)
        sum = sum + A[i];
        
    printf("������ ��=%d\n", sum);

}