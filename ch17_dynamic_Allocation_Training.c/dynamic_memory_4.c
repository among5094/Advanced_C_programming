#include <stdio.h>
#include <stdlib.h>
//ch17-4번: 단어를 입력받는 공간

char *get_word(); //단어의 주소를 반환하는 함수

int main(void)
{   
    char* ch;
    ch=get_word();
    printf("동적 메모리에 저장된 단어는 %s입니다.", ch);
    free(ch);
    return 0;
}

//단어의 주소를 반환하는 함수
char *get_word()
{
    char* s=(char*)malloc(50*sizeof(char));

    if(s == NULL)
    {
        printf("메모리 할당 오류\n");
        exit(1);
    }
    printf("단어를 입력하시오(최대50글자): ");
    scanf("%s", s);
    return s;
}