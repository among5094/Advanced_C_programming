#include <stdio.h>
//c언어 express 11강 포인터 - 7번: 배열 복사 3개하기

void array_copy(int* A, int* B, int* C, int size);

int main(void)
{
    int a[10] = {1,6,3,4,0,0,0,0,9,0 }; //a에는 기본급
    int b[10] = {1,3,3,1,0,0,0,6,9,4 }; //b에는 보너스
    int c[10] = {0}; //c에는 a+b

    array_copy(a, b, c, 10);
    
    return 0;
}

void array_copy(int* A, int* B, int* C, int size)
{
    //기본급 배열A 보여주기
    printf("A[ ] = { ");
    for(int i=0;i<size;i++)
        printf("%d ", A[i]);
    printf(" }\n");

    //보너스 배열B 보여주기
    printf("B[ ] = { ");
    for(int i=0;i<size;i++)
        printf("%d ", B[i]);
    printf(" }\n");
    
    //합계 배열C 보여주기
    printf("C[ ] = { ");
    for(int i=0;i<size;i++)
    {
        C[i] = A[i] + B[i];
        printf("%d ", C[i]);
    }
    printf(" }\n");

}