#include <stdio.h>

//구조체 선언
struct point {int x,y; };

struct circle{
    struct point center; //원의 중심
    double radius; //원의 반지름
};

//함수 선언
double area(struct circle c); //원의 면적을 계산하는 함수
double perimeter(struct circle c); //원의 둘레를 계산하는 함수

int main(void)
{
    struct point s;


    return 0;
}