#include <stdio.h>
#include <ctype.h>// toupper을 위해 선언하는 함수

int main(void)
{
    char c; //문자열 선언

    while(1)
    {
        printf("문자를 입력하시오:");
        c=getchar();
        getchar(); // 줄바꿈 문자 제거를 위해 getchar() 한 번 더 호출

        if(c == '.')
            break;
        else if (c >= 'A' && c <= 'Z')      // 입력받은 문자가 대문자면
            printf("%c\n", tolower(c));    // 소문자로 바꿔서 출력
        else if (c >= 'a' && c <= 'z') // 문자가 소문자면
            printf("%c\n", toupper(c));    // 대문자로 바꿔서 출력
    }
    return 0;
}