#include <stdio.h> //gets함수 헤더파일 stdio임
#include <string.h>

//문자열 문제 - 2번

void Deletspace(char* string); //공백을 삭제해서 문자열을 출력해주는 함수

int main(void)
{
    char str[50]; //49자까지 입력받을 수 있음

    printf("공백 문자가 있는 문자열을 입력하시오: ");
    gets(str);
    /*
    scanf는 공백 포함 불가능 그래서 gets함수 써줘야됨
    */
    Deletspace(str);

    return 0;

}

void Deletspace(char* string)
{
    for(int i=0; string[i] != '0' ; i++)
    {
        if(string[i] != ' ')
            printf("%c", string[i]);

    }
}

/*
참고

gets함수에 대한 부연 설명 사이트
https://blockdmask.tistory.com/343

scanf는 공백 포함 불가능


*/