#include <stdio.h>
//문자열 문제 - 1번
int main(void)
{
    char c;
    printf("문자를 입력하시오: ");
    scanf("%c", &c);
    printf("아스키코드 값=%d\n", toascii(c));
    return 0;

}
//c언어 express 12장 해설(all)
//https://chuinggun.tistory.com/73

/*

형변환 (int)c
함수 이용 toascii(c) ****!! 근데 %d로 입력받아야됨 !!****

*/