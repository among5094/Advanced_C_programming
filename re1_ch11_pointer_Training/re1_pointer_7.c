#include <stdio.h>

void arr_add(int* A, int* B, int* C, int size); //배열끼리 더하는 함수 A+B=C

int main(void)
{
    int A[]={100,240,400,500,600,800}; //직원들의 월급이 저장된 배열A
    int B[]={10,30,62,96,100,340}; //직원들의 보너스가 저장된 배열B
    int C[]={0}; //배열 A,B 더해서 저장될 배열C

    int size=sizeof(A)/sizeof(A[0]);// 24byte/4byte
    arr_add(A,B,C,size); 
    return 0;
}

void arr_add(int* A, int* B, int* C, int size) //배열끼리 더하는 함수 A+B=C
{
    //배열A(월급) 보여주기
    printf("A[]={ ");
    for(int i=0; i<size; i++)
        printf("%d ", *(A+i));
    printf(" }\n");

    //배열B(보너스) 보여주기
    printf("B[]={ ");
    for(int i=0; i<size; i++)
        printf("%d ", *(B+i));
    printf(" }\n");

    //배열C(월급+보너스) 보여주기
    printf("C[]={ ");
    for(int i=0; i<size; i++)
    {
        C[i]=*(A+i)+*(B+i); 
        printf("%d ", C[i]);
    }
    printf(" }\n");
}