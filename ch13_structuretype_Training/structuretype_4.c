#include <stdio.h>
//구조체04번 - 복소수 덧셈 수행
struct complex //구조체 선언
{
    double real; //실수
    double imag;  //허수
};

//구조체 함수
struct complex complex_add(struct complex x1, struct complex x2); 

int main(void)
{
    struct complex c1;//구조체 complex이라는 type의 변수를 선언하고 그 변수를 s라고 부르겠다. 
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
    
    complex_add(c1, c2);//함수 호출
    //함수를 호출할때는 앞에 구조체 선언 안 해줘도 된다.
    //다른 경우를 생각해봐도 함수 호출할때 변수타입은 선언한적이 없다.

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


