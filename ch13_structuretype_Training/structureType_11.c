#include <stdio.h>
#include <string.h> //strcmp()를 위한 헤더파일

struct phone_book
{
    char name[20]; //이름
    char home_number[20]; //집전화번호
    char phone_number[20]; //휴대폰 번호
};

int main(void)
{
    struct phone_book arr[3]; //구조체의 배열 선언
    int i;
    for(i=0; i<3; i++)
    {
        printf("이름을 입력하시오: ");
        scanf("%s", arr[i].name);
        printf("집전화번호를 입력하시오: ");
        scanf("%s", arr[i].home_number);
        printf("휴대폰번호를 입력하시오: ");
        scanf("%s", arr[i].phone_number);
    }

    char name[10];
    printf("검색할 이름을 입력하시오: ");
    scanf("%s", &name);

    for(i=0; i<3; i++)
    {
        if(strcmp(name, arr[i].name)==0)
            printf("집전화번호: %s\n휴대폰번호: %s\n", arr[i].home_number, arr[i].phone_number);
              
    }
    

    return 0;
}
