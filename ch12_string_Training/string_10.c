#include <stdio.h>
#include <string.h>
#include <ctype.h>
//문자열 10문 - 회문

int palindrome(s);

int main(void)
{
    char s[100];
    
    printf("문자열을 입력하시오: ");
    scanf("%s", &s);
    palindrome(s); //call by address    
    return 0;
}

int palindrome(s)
{    
    for (int i=0 ; i<strlen(s)/2 ;i++) //절반을 기준으로 검사했을 때
    {
        if(s[i] != s[strlen(s)-i-1]) // 처음부터 시작한 문자열과 끝에서 시작한 문자열이 하나라도 다르면?
        {
            printf("회문이 아님\n"); //회문이 아님
            return 0;
        }
    }
    printf("회문임\n"); //처음부터 시작한 문자열과 끝에서 시작한 문자열이 다른게 없으면? -> 회문임

}