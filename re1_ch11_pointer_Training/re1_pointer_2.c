#include <stdio.h>

void get_sum_diff(int x, int y, int* p_sum, int* p_diff);

int main(void)
{
    int num1,num2;
    printf("두 수를 입력하시오:");
    scanf("%d %d", &num1, &num2);

    get_sum_diff(num1,num2,&num1,&num2); //num1,num2는 call by value이고, &num1,&num2는 call by address이다
    return 0;
}

void get_sum_diff(int x, int y, int* p_sum, int* diff)
{
    printf("원소들의 합=%d", x+y);
    printf("원소들의 차=%d", x-y);
}