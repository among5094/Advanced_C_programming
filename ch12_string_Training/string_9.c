#include <stdio.h>
#include <string.h>
#include <ctype.h> //isupper(c)이 함수를 위한 헤더파일
//문자열 9번
int main(void)
{
    char s[100]={0};
    printf("텍스트를 입력하시오: ");
    gets(s);

    if( !isupper(s[0])) //isupper(c): c가 대문자인가? 참이면 1반환(!0), 거짓이면 0반환 즉, s[0]이 소문자냐고 묻는 말
        s[0] = toupper(s[0]); //toupper(c): c를 대문자로 바꾼다.
    
    if( s[strlen(s)-1] != '.' ) //s[strlen(s)-1]뜻: 마지막 문자 즉, 마지막 문자에 점이 없으면
    {
        s[strlen(s)] = '.'; //가장 마지막 문자에 점 넣어주기
        s[strlen(s)+1] = NULL;//가장 마지막 문자 1칸 뒤에 null넣어서 문자열의 끝을 알림
    }

    printf("결과 텍스트 출력: %s\n", s);

    return 0;
}
