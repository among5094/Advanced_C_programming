#include <stdio.h>
//포인터 배열 - 교재p.615~618

int main(void)
{
    int i,n;

    char *arr[]={
        "aaa",
        "bbb",
        "ccc",
        "ddd",
        "eee"
    };

    n=sizeof(arr)/sizeof(arr[0]); //배열 원소 개수 계산법
    //sizeof(arr): 배열 전체의 바이트, sizeof(arr[0]):첫번째 배열 요소의 크기를 바이트 단위로 구한다.

    for(i=0;i<n;i++)
        printf("%s \n", arr[i]);    

    return 0;
}