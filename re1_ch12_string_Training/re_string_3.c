#include <stdio.h>
#include <string.h> //strlen함수를 위한 헤더파일

int str_chr(char* s, char c); //문자열 "개수"를 구해주는 함수

int main(void)
{
    char s[100]; //입력받을 문자열
    char find_c; //몇개인지 알고싶은 변수

    //gets함수: 문자열을 입력받는 함수(공백도 가능, scanf는 공백 불가능)
    printf("문자열을 입력하시오: ");
    gets(s);

    //개수를 셀 문자 입력받기
    printf("개수를 셀 문자를 입력하시오: ");
    scanf("%c", &find_c);

    //결과-문자열 개수 count해주는 "함수 호출"
    printf("%c의 개수: %d\n", find_c, str_chr(s, find_c)); //call by address, call by value

    return 0;

}

int str_chr(char* s, char c) //개수를 세주는 함수
{
    int count=0; //count_c가 하나씩 나올때마다 1씩 증가해주기
    for(int i=0; s[i] != '\0'; i++) //다른 방법: for(int i=0; i<strlen(s) ; i++)
        if( s[i] == c )
            count++;
    
    return count;

}

/*
참고
strlen

*/