#include <stdio.h>

void arr_print(int* A, int size);

int main(void)
{
    int array[]={1,5,3,2,6,0};
    int size=sizeof(array)/sizeof(array[0]); //배열의 크기

    arr_print(array,size);

    return 0;
}

void arr_print(int* A, int size)
{
    printf("A[] = { ");
    for(int i=0; i<size;i++)
        printf("%d ", *(A+i));
    printf(" }\n");
    
}