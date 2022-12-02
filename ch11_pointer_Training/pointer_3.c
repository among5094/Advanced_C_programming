#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//c언어 express - chapter11.포인터 -실습3

void arr_fill(int* A, int size);

int main(void)
{
    int arr[20]; //여기에 20을 미리 쓰면 동적 할당이 아니지 않나? 동적 할당이 아니라도 상관없는 건가?
    arr_fill(arr,20);
    
    for(int i=0;i<20;i++)
        printf("%d ", arr[i]);

    return 0;
}

void arr_fill(int* A, int size)
{

    srand(time(NULL));
    for(int i=0;i<size;i++)
        A[i]=rand();

}