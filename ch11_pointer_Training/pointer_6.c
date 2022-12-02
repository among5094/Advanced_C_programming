#include <stdio.h>

//c언어 express 11강 포인터 - 6번: 배열 복사

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
    //원래 배열a를 보여주기
    printf("A[ ] = { ");
    for(int i=0;i<size;i++)
        printf("%d ", A[i]);
    printf(" }\n");
    
    //a를 b에 옮기기
    printf("A[ ] = { ");
    for(int i=0;i<size;i++)
    {
        B[i] = A[i];
        printf("%d ", B[i]);
    }
    printf(" }\n");

}