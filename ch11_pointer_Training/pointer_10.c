#include <stdio.h>

//10번 - 2개의 정수를 입력받아서 최대공약수와 최소공배수 입력받기

void get_lem_gcd(int x, int y, int* P_lcm, int* p_gcd); 

int main(void)
{
    int num1, num2;
    printf("두 개의 정수를 입력하시오: ");
    scanf("%d %d", &num1, &num2);

    //get_lem_gcd함수
    get_lem_gcd(num1, num2, &num1, &num2);

    //최소공배수, 최대공약수 표시
    printf("최소공배수는 %d입니다.\n", num1);
    printf("최대공약수 %d입니다.\n", num2);

    return 0;
}   

void get_lem_gcd(int x, int y, int* P_lcm, int* p_gcd)
{
    //최대공약수 계산
    for(int i=1 ; i<=x && i<=y ; i++)
    {
        if(x%i==0 && y%i==0)
            *p_gcd = i;
    }
    //최소공배수 계산
    *P_lcm = (x*y) / *p_gcd;

}