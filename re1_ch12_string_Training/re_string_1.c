#include <stdio.h>

int main(void)
{
    char ch; 
    printf("문자를 입력하시오: ");
    scanf("%c", &ch);
    printf("아스키코드값=%d", ch);
    return 0;
}

/*아스키코드 출력하는 방법
1. 문자로 입력받은 형태를 정수로 출력한다. %d사용 
2. printf("아스키코드 값=%d\n", toascii(c)); -> toascii(c)함수란? c를 아스키코드로 바꾼다.
*/