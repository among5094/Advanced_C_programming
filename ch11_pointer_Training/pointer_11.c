#include <stdio.h>
#include <string.h> //문자열 함수를 위한 헤더파일

//12번 - 2개의 배열을 합쳐서 하나의 정렬된 배열C[]로 만드는 함수 작성
//pointer free code2번에 있음
void merge(int* A, int* B, int* C, int size);

int main(void)
{
    int Aarr[4]={2,5,7,8};
    int Barr[4]={1,3,4,6};
    int Carr[50];

    //합병하는 함수 호출
    merge(Aarr, Barr, Carr, 4); 


    return 0;
}   

 void merge(int* A, int* B, int* C, int size)
{
    //원래 배열 Aarr 보여주기
    printf("A[ ] = { ");
    for(int i=0;i<size;i++)
        printf("%d ", A[i]);
    printf("}\n");

    //원래 배열 Barr 보여주기
    printf("B[ ] = { ");
    for(int i=0;i<size;i++)
        printf("%d ", B[i]);
    printf("}\n");
    
    printf("C[ ] = { ");
    //배열 Aarr과 Barr 합치는 알고리즘
    for(int i=0 ; i<50 ; i++)
    {
        if(A[i]<B[i])
        {
            strcpy(C[i], A[i]);
            A[i]+1; //배열의 index증가
            printf("%d ", C[i]);
        }
        else if(A[i]>B[i])
        {
            strcpy(C[i], B[i]);
            (B[i]+1);
            printf("%d ", C[i]);
        }

    }

    //합병된 배열 Carar 보여주기
    
    for(int i=0;i<size;i++)
        printf("%d ", C[i]);
    printf("}\n");

    

}

/*
포인터형 배열의 index증가 

int arr[3]={5, 10, 15}
*arr >> 5
*arr+1 >> 6
*(arr+1) >> 10



참고 블로그: https://deftkang.tistory.com/40
*/