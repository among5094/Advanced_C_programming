#include <stdio.h>

int main(void)
{
    char s[100];
    int count=0;
    printf("문자열을 입력하시오: ");
    gets(s);
    for(int i=0; s[i] != NULL ; i++)
    {
        if(s[i]==',' || s[i]=='.')
            count++;
    }
    printf("구두점의 개수는 %d입니다.\n", count);
    return 0;
}
