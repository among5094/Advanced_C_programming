#include <stdio.h>
/*
구조체 12번 - 포커게임
참고 링크:
https://chuinggun.tistory.com/entry/C%EC%96%B8%EC%96%B4-%ED%8F%AC%EC%BB%A4-%EA%B2%8C%EC%9E%84%EC%97%90-%EC%82%AC%EC%9A%A9%EB%90%98%EB%8A%94-%EC%B9%B4%EB%93%9C%EB%A5%BC-%EA%B5%AC%EC%A1%B0%EC%B2%B4-card%EB%A1%9C-%EC%A0%95%EC%9D%98%ED%95%98%EA%B3%A0-52%EA%B0%9C%EC%9D%98-%EC%B9%B4%EB%93%9C%EB%A5%BC-%EA%B5%AC%EC%A1%B0%EC%B2%B4%EC%9D%98-%EB%B0%B0%EC%97%B4%EB%A1%9C-%EB%82%98%ED%83%80%EB%82%B4%EB%9D%BC
*/
struct card
{
    int value; //카드의 숫자
    char suit; //멤버의 이름
};

int main(void)
{
    struct card arr[52];//문제: 52개의 카드를 구조체의 배열로 나타내기

    //배열 1~13까지
    for(int i=0;i<13;i++)
    {
        arr[i].value=(i%13)+1;//배열은 0부터 시작하니깐 그 차이를 채워주려고 +1한거임.
        arr[i].suit='c';
    }

    //배열 13~26까지
    for(int i=0;i<13;i++)
    {
        arr[i+13].value=(i%13)+1;
        arr[i+13].suit='d';
    }

    //배열 26~39까지
    for(int i=0;i<13;i++)
    {
        arr[i+26].value=(i%13)+1;
        arr[i+26].suit='h';
    }

    //배열 39~52까지
    for(int i=0;i<13;i++)
    {
        arr[i+39].value=(i%13)+1;
        arr[i+39].suit='s';
    }

    for(int i=0; i<52;i++)
        printf("%d:%c ", arr[i].value, arr[i].suit);

    return 0;
}