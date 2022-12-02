#include <stdio.h>
#include <string.h> //strlen함수를 위한 헤더파일

//문자열 문제 4번 - 문자열 빈도수 계산하기

int str_chr(char* s, int c); //문자열 개수 count해주는 함수

int main(void)
{
    char arr_str[100]; //입력받을 문자열
    char count_c = 97; //몇개인지 알고싶은 변수

    //문자열을 입력받는 함수
    printf("문자열을 입력하시오: ");
    gets(arr_str);

    //결과
    for(int i=0; i <26 ; i++) //알파벳 개수
    {
        printf("%c: %d \n", (char)(i+97), str_chr(arr_str, count_c+i ));
    }

    return 0;

}

int str_chr(char* s, int c)
{
    int count=0; //count_c가 하나씩 나올때마다 1씩 증가해주기

    for(int i=0; i <26 ; i++) //알파벳 개수
    {
        if( s[i] == (char)c )
            count++;
    }
    return count;

}