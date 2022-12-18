#include <stdio.h>

int search(int* A, int size, int serch_value);

int main(void)
{
    int A[]={400, 340, 200, 150, 210, 430, 200}; //직원들 월급이 저장된 배열
    int size=sizeof(A)/sizeof(A[0]); //배열A의 size
    int serch_value=200; //찾고 싶은 값=200만원
    search(A,size,serch_value);
    return 0;
}

int search(int* A, int size, int serch_value)
{
    int count=0; //월급이 200만원인 사람을 찾으면 그 사람수를 세기 위한 count변수
    for(int i=0; i<size;i++)
        if(A[i]==serch_value)
            count++;
    printf("월급이 200만원인 사람의 인덱스=%d\n", count);

}