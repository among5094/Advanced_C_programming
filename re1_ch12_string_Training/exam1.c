#include <stdio.h>
#include <string.h>
#include <ctype.h>

int palindrome(char* s);

int main(void)
{
    char s[100];

    printf("���ڿ� �Է�");
    scanf("%s", s);

    palindrome(s);

    return 0;

}

int palindrome(char* s)
 {
    int len=strlen(s);
    for(int i=0; i<len/2 ; i++)
    {
        if(s[i] != s[len-i-1])
        {
            printf("ȸ���� �ƴ�");
            return 0;
        }    
    }
    printf("ȸ����");

 }