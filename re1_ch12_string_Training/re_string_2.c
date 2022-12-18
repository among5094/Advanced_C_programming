#include <stdio.h> //gets함수 헤더파일 stdio임

void Delet_space(char* string); //공백을 삭제하는 함수

int main(void)
{
    char string[50]; //49자까지 입력받을 수 있음, 문자열은 마지막에 null이 들어가기 때문
    printf("공백 문자가 있는 문자열을 입력하시오: ");
    gets(string); //scanf는 공백 포함 불가능 그래서 gets함수 써줘야됨
    Delet_space(string);

    return 0;
}

void Delet_space(char* string) //공백을 삭제하는 함수
{
    for(int i=0; string[i] != '\0' ; i++) //계속 틀리는 이유 null을 \0으로 써야하는데 0으로 써서 오류났음 계속
    {
        if(string[i] != ' ')
            printf("%c", string[i]);

    }
}

/*
참고
1. gets함수에 대한 부연 설명 사이트
https://blockdmask.tistory.com/343

2. 
NULL == '\0' 

*/