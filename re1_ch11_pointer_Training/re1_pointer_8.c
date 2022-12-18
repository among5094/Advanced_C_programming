#include <stdio.h>

int arr_sum(int* A, int size);

int main(void)
{
    int A[]={300, 250, 500, 700, 140, 400}; //월급 저장
    int size=sizeof(A)/sizeof(A[0]);
    arr_sum(A,size);
    return 0;
}

int arr_sum(int* A, int size)
{
    int sum=0;
    printf("A[]={ ");
    for(int i=0;i<size;i++)
    {
        printf("%d ", *(A+i));
        sum=sum+*(A+i);
    }    
    printf(" }\n");
    printf("월급의 합: %d\n", sum);

}