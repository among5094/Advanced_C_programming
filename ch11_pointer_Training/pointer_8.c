#include <stdio.h>//c언어 express 11강 포인터 - 8번: 지급한 월급의 총액

void array_sum(int* A, int size);

int main(void)
{
    int a[10] = {220, 240, 260, 280, 300, 320, 340, 380, 400, 300 };
    array_sum(a, 10);
    return 0;
}

void array_sum(int* A, int size)
{
    //원래 배열a를 보여주기
    printf("A[ ] = { ");
    for(int i=0;i<size;i++)
        printf("%d ", A[i]);
    printf(" }\n");
    
    int sum = 0;
    for(int i=0;i<size;i++)
        sum = sum + A[i];
        
    printf("월급의 합=%d\n", sum);

}