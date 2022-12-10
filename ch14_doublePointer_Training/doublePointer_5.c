#include <stdio.h>
//ch14 이중포인터 -5번(교재p.615)
//외부에서 선언된 변수의 값을 인수로 받아서 변경하려면 반드시 변수의 주소(call by address)를 함수에 전달해야한다.
int set_max_ptr(int m[], int size, int **pmax); //포인터가 배열의 가장 큰 값을 가리키게 하는 함수

int main(void)
{
    int m[6]={5,6,1,3,7,9}; //int형 배열
    int *pmax; //배열 m의 원소 중에서 가장 큰 값을 pmax가 가리킨다.

    set_max_ptr(m,6,&pmax);
    //외부에서 선언된 변수의 값을 인수로 받아서 변경하려면 반드시 변수의 주소(call by address)를 함수에 전달해야한다.
    return 0;
}

int set_max_ptr(int m[], int size, int **pmax)
{   
    //최대값을 구하는 부분
    int max=m[0]; //우선 최대값을 배열0번째로 >가정<하기
    for(int i=0; i<size; i++)
    {
        if(max<m[i])
            max=m[i];
    }
    printf("가장 큰 값은: %d\n", max);
}