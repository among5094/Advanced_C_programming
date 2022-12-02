#include <stdio.h>
#include <string.h>  //문자열 함수들은 string.h에 선언되어 있다.

int get_response(char* prompt);

int main(void)
{
    char str[100];
    printf("게임을 하시겠습니까?(종료는 .): ");
    gets(str);
    get_response(str);

    if( get_response(str) == 1)
        printf("긍정적인 답변\n");
    else if(get_response(str) == 0)
        printf("부정적인 답변\n");

    return 0;
}
/*
strcmp(s1,s2): s1과 s2를 비교한다.
같으면 0반환, s1<s2이면 음수,s1>s2 양수반환
*/
int get_response(char* prompt)
{
    if( !strcmp(prompt, "yes"))
        return 1;
    else if( !strcmp(prompt, "ok"))
        return 1;
    else if( !strcmp(prompt, "no"))
        return 0;

}
