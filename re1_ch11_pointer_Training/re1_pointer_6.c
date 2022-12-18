#include <stdio.h>

void arr_copy(int* A, int* B, int size); //배열을 복사하는 함수

int main(void)
{
    int arr1[]={1,2,3,0,0,0,0}; //배열 이름이 A이든 arr1이든 결과는 같음!
    int arr2[]={0};
    int size=sizeof(arr1)/sizeof(arr1[0]); //배열의 크기
    arr_copy(arr1,arr2,size);//배열A의 첫 번째 주소값 전달
    return 0;
}

void arr_copy(int* A, int* B, int size) //배열을 복사하는 함수
{
    //원래 배열A[]보여주기
    printf("A={ ");
    for(int i=0; i<size;i++)
        printf("%d ", *(A+i) ); //*(A+i)말고 A[i]도 된다. 
    printf(" }");

    //배열 A를 비어있는 배열B에 복사하기
    for(int i=0; i<size;i++)
        B[i]=A[i];
    printf("\n");

    //배열A가 복사된 배열B 보여주기
    printf("B={ ");
    for(int i=0; i<size;i++)
        printf("%d ", B[i]);
    printf(" }");

}