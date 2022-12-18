#include <stdio.h>

void get_lcm_ged(int x, int y, int* p_lcm, int* p_gcd);
//p_lcm:최소공배수, p_gcd:최대공약수

int main(void)
{
    int num1,num2;
    printf("두 개의 정수를 입력하시오:");
    scanf("%d %d", &num1, &num2);
    get_lcm_ged(num1, num2, &num1, &num2); 
    //num1,num2는 call by value이고 &num1, &num2는 call by address
    return 0;
}

void get_lcm_ged(int x, int y, int* p_lcm, int* p_gcd)
{
    //최대공약수 계산
    for(int i=1 ; i<=x && i<=y ; i++) //0으로 나눈건 의미가 없다. 1부터 시작
        if(x%i==0 && y%i==0)
            *p_gcd = i;
    
    //최소공배수 계산
    *p_lcm = (x*y) / *p_gcd;

    //최대공약수, 최소공배수 출력
    printf("최소공배수는 %d입니다.\n최대공약수는 %d입니다.\n", *p_lcm, *p_gcd );
    //주소를 받은 것이기 때문에 *을 붙여 값을 출력해주어야 한다. 
}