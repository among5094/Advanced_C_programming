#include <stdio.h>
#include <string.h>
#include <ctype.h>
//문자열 11번 - 거꾸로 출력 //근데 아직 모르겠음ㅠㅠ

int main(void)
{
    char s[100];
    char *ptr[100];
    int i=0;
    int j;

    //문자열 입력받기
    puts("문자열을 입력하시오: ");
    gets(s);
    ptr[0]=strtok(s," "); //이 부분 잘 모르겠음 

    while(ptr[i] != NULL)
    {
        ptr[i+1]=strtok(NULL," ");
        i++;
    }
    
    for (j=i-1;j>=0;j--)
        printf("%s ", ptr[j]);

    return 0;
}

/*
strtok(s,""): 문자열 s를 " "공백을 기준으로 자르기
한 마디로 문자열을 분리하는 역할을 함
*/