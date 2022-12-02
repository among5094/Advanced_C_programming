#include <stdio.h>
#include <string.h>  //문자열 함수들은 string.h에 선언되어있다.
#include <ctype.h>
//대소문자 바꿔주기 위한 함수 헤더파일
//문자 처리 라이브러리 함수를 위한 

int main(void)
{
    char c;

    while(1)
    {   
        printf("문자를 입력하시오(종료는 .): ");
        c = getchar();

        //알고리즘
        if( islower(c) ) //islower(c) : c가 소문자인가? 참이면 !0반환 거짓이면 0반환
        {   
            putchar( toupper(c) ); //toupper(c) : c를 대문자로 바꾼다
            printf("\n");
        }
        if( isupper(c) ) //isupper(c) : c가 대문자인가?
        {
            putchar( tolower(c) ); //tolower(c) : c를 소문자로 바꾼다.
            printf("\n");
        }
        if( c=='.')
            break;

        fflush(stdin);//입력 버퍼 지우기?

    }
    return 0;

}

/*
gets()와 getchar()의 차이는 무엇일까?
https://dragonseop.tistory.com/14
*/