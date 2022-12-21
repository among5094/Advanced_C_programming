#include <stdio.h>
#include <string.h> //4번- 빈도수 출력

int main()
{
    char str[100]; // 크기 100인 문자열 배열 선언
    char alphabet[26] = {0};

    printf("문자열을 입력하시오: ");
    gets(str); // 공백 포함 문자열 입력받기

    // 문자열에서 알파벳 빈도수 체크
    for (int i = 0; i < strlen(str); i++)
        alphabet[(int)str[i] - 97]++; //아스키코드 소문자a는 97

    // 알파벳 빈도수 출력
    for (int i = 0; i < strlen(str); i++)
        printf("%c: %d\n", 97 + i, alphabet[i]); //아스키코드 소문자a는 97

    return 0;
    
}