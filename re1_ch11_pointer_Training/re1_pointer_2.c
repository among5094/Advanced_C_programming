#include <stdio.h>

void get_sum_diff(int x, int y, int* p_sum, int* p_diff);

int main(void)
{
    int num1,num2;
    printf("�� ���� �Է��Ͻÿ�:");
    scanf("%d %d", &num1, &num2);

    get_sum_diff(num1,num2,&num1,&num2); //num1,num2�� call by value�̰�, &num1,&num2�� call by address�̴�
    return 0;
}

void get_sum_diff(int x, int y, int* p_sum, int* diff)
{
    printf("���ҵ��� ��=%d", x+y);
    printf("���ҵ��� ��=%d", x-y);
}