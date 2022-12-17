#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//c언어 express - chapter11.포인터 -실습3

void arr_fill(int* A, int size);

int main(void)
{
    int arr[20];
    arr_fill(arr,20);
    
    for(int i=0;i<20;i++)
        printf("%d ", arr[i]);

    return 0;
}

void arr_fill(int* A, int size)
{
    for(int i=0;i<size;i++)
        A[i]=rand();
}