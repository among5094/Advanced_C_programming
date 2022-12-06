#include <stdio.h>
#include <string.h>

int main(void)
{
    char cal[4];
    int num1, num2; //입력받을 정수 2개
    int sum=0;

    printf("연산을 입력하시오: ");
    scanf("%s %d %d", &cal, &num1, &num2);

    if(strcmp(cal,"add")==0) sum=num1+num2;
    else if(strcmp(cal,"add")==0) sum=num1-num2;
    else if(strcmp(cal,"mul")==0) sum=num1*num2;
    else if(strcmp(cal,"div")==0) sum=num1%num2;

    printf("연산의 결과: %d\n", sum);
    return 0;
}