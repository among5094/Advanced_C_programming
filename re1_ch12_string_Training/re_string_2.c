#include <stdio.h> //gets함수 헤더파일 stdio임

void Delet_space(char* string); //공백을 삭제하는 함수

int main(void)
{
    char string[50]; //49자까지 입력받을 수 있음, 문자열은 마지막에 null이 들어가기 때문
    printf("공백 문자가 있는 문자열을 입력하시오: ");
    gets(string); //scanf는 공백 포함 불가능 그래서 gets함수 써줘야됨

    Delet_space(string);
    //배열이 곧 포인터다.
    //매개변수가 포인터형으로 선언되어 있으니 &string[0]로 전달된다. 즉, 배열의 첫 번째 주소값이 전달되는 셈이다.
    //call by address임. 근데 매개변수가 포인터,배열 형식이 아니면 call by value이다. 

    return 0;
}

void Delet_space(char* string) //공백을 삭제하는 함수
{
    for(int i=0; string[i] != '\0' ; i++) //계속 틀리는 이유 null을 \0으로 써야하는데 0으로 써서 오류났음 계속
        if(string[i] != ' ')
            printf("%c", string[i]);
            //%s이면 오류나고 %c여야 실행됨. 아마 공백을 제거하려면 string가 아니라 char단위로 봐야돼서 그런 것 같다.
    
}

/*
참고
1. gets함수에 대한 부연 설명 사이트
https://blockdmask.tistory.com/343

2. 
NULL == '\0' 



*/