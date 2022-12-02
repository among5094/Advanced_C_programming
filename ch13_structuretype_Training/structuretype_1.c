#include <stdio.h>

//구조체 선언
struct book
{
    int id; 
    char title[100]; //책 제목
    char author[20]; //책의 저자

};


int main(void)
{
    struct book s; //구조체 book이라는 type에 변수를 선언하고 그 변수를 s라고 부르겠다. 

    //구조체 초기화
    s.id=1;
    strcpy(s.title,"이야아아아");
    strcpy(s.author,"혜멍뭉이");

    printf("{%d, %s, %s}", s.id, s.title, s.author);
    return 0;

}