#include <stdio.h>
#include <string.h>//strtok()함수를 위해서 선언

int main(void)
{
    char s[100];
    char *ptr[100];
    int i=0, j;

    //문자열 입력받기
    puts("문자열을 입력하시오: ");
    gets(s);

    ptr[0]=strtok(s," "); //" "를 기준으로 문자열s를 자름

    while(ptr[i] != NULL) //끝난게 아니면 계속실행, 끝났으면 종료
    {
        ptr[i+1]=strtok(NULL," "); //이전에 너가 구분자를 찾았던 그 문자열 주소에서 부터 다시 찾아달라"는 뜻
        i++;
    }
    
    //거꾸로 출력하는 부분
    for (j=i-1;j>=0;j--)
        printf("%s ", ptr[j]);

    return 0;
}

/*
strtok란?
참고: https://blockdmask.tistory.com/382 (!!!!꼭 참고하기)
string + tokenize 즉, 문자열을 토큰처럼 조각내는 함수이다. 
strtok(자를 문자열,구분할 기준)
ex) strtok(str," ")이것은  문자열 s를 " "공백을 기준으로 자른다. " "를 찾아서 문장의 끝을 알리는 \n을 넣어준다.
한 마디로 문자열을 분리하는 역할을 함!
 strtok 함수를 처음 불러줄때만 원하는 문자열을 집어넣고 그 다음부터는 첫번째 인자에 NULL을 넣어준다.
 이는 strtok 함수에게 "이전에 너가 구분자를 찾았던 그 문자열 주소에서 부터 다시 찾아달라"는 뜻이다.
*/