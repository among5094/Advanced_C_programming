#include <stdio.h>
#include <stdlib.h> //rand함수를 위해
#include <time.h> //매번 rand함수를 다르게 하는 헤더파일

//arr배열의 첫 주소값을 전달받은 배열 A에 rand값을 넣는 함수
void array__fill(int* A, int size);

int main(void)
{
    int arr[10]={0};
    array_fill(arr,10); 
    return 0;
}

void array__fill(int* A, int size)
{
    for(int i=0; i<size ; i++)
    {
        A[i]=rand()%100; //0~99까지 생성되는 난수가 배열A[i]에 저장됨
        printf("%d ", *(A+i)); //두 가지 방법으로 됨 A[i] 
    }
    
}
/*
피드백
1. 원래 풀었던 문제보다 조금 더 짧게 썼다.
함수에서 메인함수로 보내지 않고 함수의 for문에 바로 썼다. 
2. A[i]말고 *(A+i)로 풀 수도 있다. -> 다른 포인터에 대한 이해가 깊어진 것 같다. 
*/  