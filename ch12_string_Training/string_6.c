#include <stdio.h>
#include <string.h>  //문자열 함수들은 string.h에 선언되어 있다.
#define SEZE 100

//문자열을 받아서 문자열에 포함된 문자를 대문자로 변환하는 함수
void str_upper(char* s);

int main(void)
{
    int str[SEZE];
    printf("문자열을 입력하시오: ");
    gets(str); //문자열을 입력받는 함수
    str_upper(str); //문자열에 포함된 문자를 대문자로 변환하는 함수 호출
    printf("변환된 문자열: %s\n", str);

    return 0;
}

void str_upper(char* s)
{
    for(int i=0; i< strlen(s) ;i++)//strlen(s):문자열s의 길이
        if(s[i] >= 'a' && s[i] <= 'z')
            s[i]=s[i]-'a'+'A';
}