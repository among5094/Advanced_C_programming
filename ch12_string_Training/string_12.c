#include <stdio.h>
#include <string.h> //strtok()를 위해서 존재하는 헤더파일
#include <ctype.h> //tolower()를 위해서 존재하는 헤더파일
//문자열 12번 - 성과 이름 분리
int main(void)
{
    char s[100]; //문자열
    char *ptr[100];
    int i=0,j;

    //성과 이름 입력받기
    printf("성과 이름을 대문자로 입력하시오: ");
    gets(s);

    //대문자를 소문자로 바꿔주는 부분
    for (int i = 0;i < strlen(s);i++)
        s[i] = tolower(s[i]);//tolower(s): c를 소문자로 바꾸어준다.

    
    ptr[0]=strtok(s," "); //" "를 기준으로 문자열s를 자름
    while(ptr[i] != NULL) //끝난게 아니면 계속실행, 끝났으면 종료
    {
        ptr[i+1]=strtok(NULL," "); //이전에 너가 구분자를 찾았던 그 문자열 주소에서 부터 다시 찾아달라"는 뜻
        i++;
    }
     
    //거꾸로 출력해주는 부분
   for (j=i-1;j>=0;j--)
        printf("%s ", toupper(ptr[j]));

    return 0;
}
/*
문제: 공백을 기준으로 자를 수는 있는데 대문자를 소문자로 바꾸는 곳에서 애를 먹었다. 새로운 문자 k를 선언해도 이상함
해결방법!!: 소문자로 바꾸어주는 부분의 위치를 성,이름 입력받는 곳 밑으로 바꿔주니깐 해결됐다!
*/

/*
puts()란?
C언어 스타일의 문자열인 char*, char[] 타입을 표준 출력(stdout)으로 보내는 함수입니다. 
puts 함수가 문자열을 출력을 끝까지 하고나면 개행(\n)도 보내기 때문에 자동적으로 줄이 바뀌게 됩니다.
*/

//ROH HYEMIN