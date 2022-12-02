#include <stdio.h>

int search(int* A, int size, int search_value); //search_value = 찾고 싶은 값

int main(void)
{
    int a[10]={ 100, 200, 300, 400, 500, 600, 700, 800, 900, 1000 };
    search(a, 10, 600);
    
}   

int search(int* A, int size, int search_value)
{
    //원래 배열a를 보여주기
    printf("A[ ] = { ");
    for(int i=0;i<size;i++)
        printf("%d ", A[i]);
    printf(" }\n");

    //search_value 찾기 위한 부분
    int number=0;
    for(int i=0; i<size ; i++)
    {
        number++;
        if( A[i] == search_value )
            printf("월급이 %d만원인 사람의 인덱스=%d\n", search_value, number);
        else
            continue;
    }
    return 0;

}