#include <stdio.h>
#include <stdlib.h> //malloc을 위해서 
#include <string.h>
//구조체를 저장할 수 있는 공간을 할당 받아서 사용해보기

struct Book
{
    int number;
    char title[50];
};


int main(void)
{   
    //구조체 동적 메모리
    struct Book* p;
    p=(struct Book*)malloc(2*sizeof(struct Book));

    //메모리가 제대로 할당받았는 지 검사하는 용도
    if(p==NULL) //구조체 배열 첫 번째 값이 NULL이면?
    {
        print("메모리 할당 오류\n"); //메모리 할당 오류
        exit(1); 
    }
    printf("입력1: ");
    p[0].number=1;
    scanf("%s", p[0].title);
    p[1].number=2;
    scanf("%s", p[1].title);

    printf("출력1: %s\n 출력2: %s\n", p[0].title, p[1].title);

    return 0;
}