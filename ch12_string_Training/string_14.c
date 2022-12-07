#include <stdio.h>
#include <string.h>
//문자열 - 14번: 찾아 바꾸기
int main()
{
    char s[80]=""; //입력받을 문자열
    char find[15]=""; //찾을 문자열
    char change[15]=""; //바꿀 문자열
    char space=" "; //space는 공백을 의미
    char *pst; //pointer string, 포인터형 문자열


    printf("문자열을 입력하시오: ");
    gets(s);
    printf("찾을 문자열: ");
    gets(find);
    printf("바꿀 문자열: ");
    gets(change);


    while(pst != NULL )// 문자열의 끝이 아니면 무한루프
    {
        

    }

    return 0;
}

//  A fool and his money are sonn parted.
/*
strstr()함수에 대해...
strstr함수를 사용하면 대상 문자열에서 찾고자 하는 문자열을 발견하면 해당 위치의 "주소값"을 반환하고 종료됩니다.

참고할 코드 링크(정답링크): 
https://inhwascope.tistory.com/93

토큰 함수에 대한 도움되는 링크(문제를 해결하기 위해 읽어보면 좋음):
https://kingmaron.tistory.com/160


*/