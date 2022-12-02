#include <stdio.h>
#include <string.h>
#include <ctype.h>
//문자열 12번 - 성과 이름 분리

int main(void)
{
    char s[100]; //문자열
    char *ptr[100];

    //성과 이름 입력받기
    printf("성과 이름을 대문자로 입력하시오: ");
    gets(s);
    while(isupper(s)==0) //대문자가 맞다면?
    {
        strtok(s," "); //문자열s에서 공백 분리

    }
    tolower(s); //문자열s를 소문자로 바꾼다.

    printf("%s ", tolower(s));

    return 0;
}

/*
puts()란?
C언어 스타일의 문자열인 char*, char[] 타입을 표준 출력(stdout)으로 보내는 함수입니다. 
puts 함수가 문자열을 출력을 끝까지 하고나면 개행(\n)도 보내기 때문에 자동적으로 줄이 바뀌게 됩니다.
*/