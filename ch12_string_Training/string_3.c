#include <stdio.h>
#include <string.h> //strlen함수를 위한 헤더파일

//문자열 문제 3번 - 문자열 개수 세기

int str_chr(char* s, int c); //문자열 개수 count해주는 함수

int main(void)
{
    char arr_str[100]; //입력받을 문자열
    char count_c; //몇개인지 알고싶은 변수

    //gets함수: 문자열을 입력받는 함수
    printf("문자열을 입력하시오: ");
    gets(arr_str); //gets는 

    //개수를 셀 문자 입력받기
    printf("개수를 셀 문자를 입력하시오: ");
    scanf("%c", &count_c);

    //결과-문자열 개수 count해주는 "함수 호출"
    printf("%c의 개수: %d\n", count_c, str_chr(arr_str, count_c));

    return 0;

}

int str_chr(char* s, int c)
{
    int count=0; //count_c가 하나씩 나올때마다 1씩 증가해주기

    for(int i=0; i<strlen(s) ; i++)
    {
        if( s[i] == (char)c )
            count++;
    }
    return count;

}

/*
참고
strlen

*/