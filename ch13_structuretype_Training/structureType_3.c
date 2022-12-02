#include <stdio.h>

struct email
{
    char title[20]; //제목
    char sender[30]; //수신자
    char receiver[30]; //발신자
    char content[100]; //내용
    char date[20]; //날짜
    int pri; //우선순위
};

int main(void)
{
    struct email s;

    //구조체 초기화
    strcpy(s.title,"안부 메일"); //제목
    strcpy(s.sender,"among5094@gmail.com"); //수신자
    strcpy(s.receiver,"hsh@naver.com"); //발신자
    strcpy(s.content,"깃허브 꾸준히 올려주세요!"); //내용
    strcpy(s.date,"2022.12.02.금"); //제목
    s.pri=1;

    //출력
    printf("제목: %s \n", s.title);
    printf("수신자: %s \n", s.sender);
    printf("발신자: %s \n", s.receiver);
    printf("내용: %s \n", s.content);
    printf("날짜: %s \n", s.date);
    printf("우선순위: %d \n", s.pri);

    return 0;
}