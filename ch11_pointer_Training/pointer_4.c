#include<stdio.h>
#include<stdlib.h>

void array_print(int* A, int size);

int main(void)
{
    int a[] = { 1,2,3,4,0,0,0,0,0,0 };
    array_print(a, 10);
}

void array_print(int* A, int size)
{
    printf("A[ ] = { ");
    for (i = 0; i < size; i++) 
        printf("%d ", A[i]);

    printf(" }\n");

}

/*

�̷��� �ϸ� �ȵǴ� ����?

#include <stdio.h>
#include <stdlib.h>

void array_print(int* A, int size);

int main(void)
{
   int arr[4]={1,2,3,4}//size 10��
   //array_print(arr,4);
}

void array_print(int* A, int size)
{
    printf("A[ ] = { ");

    for(int i=0; i<size ; i++)
        printf("%d ", A[i]);

    printf(" }");
}
*/