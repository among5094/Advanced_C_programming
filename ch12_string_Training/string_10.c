#include <stdio.h>
#include <string.h>
#include <ctype.h>
//문자열 10문 - 회문
int main(void)
{
    char s[100];
    
    printf("문자열을 입력하시오: ");
    scanf("%s", &s);

    int len = strlen(s);
    
    for (int i=0;i<len/2;i++)
    {
        if(s[i] != s[len-i-1])
        {
            printf("회문이 아님\n");
            return 0;
        }
    }
    printf("회문임\n");
    
    return 0;
}