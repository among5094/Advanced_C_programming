#include <stdio.h>
//구조체04번 - 복소수 덧셈 수행
struct complex //구조체 선언
{
    double real; 
    double imag; 
};

//구조체 함수
struct complex complex_add(struct complex x1, struct complex x2); 

int main(void)
{
    struct complex c1;
    struct complex c2;

    //복소수의 첫 번째 실,허수 부분
    printf("첫 번째 복소수의 실수부분: ");
    scanf("%lf", &c1.real);
    printf("첫 번째 복소수의 허수부분: ");
    scanf("%lf", &c1.imag);

    //복소수의 두 번째 실,허수 부분
    printf("두 번째 복소수의 실수부분: ");
    scanf("%lf", &c2.real);
    printf("두 번째 복소수의 허수부분: ");
    scanf("%lf", &c2.imag);

    //함수 호출
    complex_add(c1, c2);

    return 0;
}

struct complex complex_add(struct complex x1, struct complex x2)
{
    struct complex result;
    result.real =x1.real+x2.real;
    result.imag=x2.imag+x2.imag;

    printf("복소수의 합:\n");
    printf("실수부: %lf\n", result.real);
    printf("허수부: %lf\n", result.imag);
}


