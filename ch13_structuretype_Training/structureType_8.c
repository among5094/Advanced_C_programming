#include <stdio.h>
#define PI 3.141592 //PI정의하기

//구조체 선언 부분
struct point {int x, y; }; //원의 x좌표, y좌표

struct circle{
    struct point center; //원의 중심
    double radius; //원의 반지름
};

//함수 선언 부분
double area(struct circle c); //원의 면적을 계산하는 함수
double perimeter(struct circle c); //원의 둘레를 계산하는 함수

int main(void)
{
    struct point axis;//원의 x좌표, y좌표
    struct circle r; //원의 반지름

    printf("원의 중심: ");
    scanf("%d %d", &axis.x, &axis.y);

    printf("원의 반지름: ");
    scanf("%lf", &r.radius);

    //원의 면적을 위한 함수 호출
    printf("원의 면적=: %lf, 원의 둘레= %lf\n", area(r), perimeter(r));

    return 0;
}

//원의 면적을 계산하는 함수 정의
double area(struct circle c) 
{
    double area; //원의 면적
    area = (c.radius*c.radius)*PI;
    return area;

}
//원의 둘레를 계산하는 함수 정의
double perimeter(struct circle c) 
{
    double circumference; //원의 둘레
    circumference = 2*PI*c.radius; 
    return circumference;

}