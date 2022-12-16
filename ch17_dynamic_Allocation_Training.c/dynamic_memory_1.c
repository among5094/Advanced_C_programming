#include <stdio.h>
#include <stdlib.h> //동적메모리 malloc()을 위해서
//ch17-1번: 양의 정수의 합 구하기

int main(void)
{
    //정수의 개수 입력받기
    int num=0, sum=0;
    printf("학생의 수: ");
    scanf("%d", &num);
    
    //동적할당
    int* arr=(int*)malloc(num*sizeof(int));

    //성적 받아서 저장
    for(int i=0; i<num; i++)
    {
        printf("양의 정수를 입력하시오: ");
        scanf("%d", &arr[i]);
        sum = sum+arr[i]; //합계
    }
    printf("합은 %d입니다.\n", sum); //합 출력

    free(arr);
    return 0;
}