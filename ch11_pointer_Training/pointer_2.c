//c��� express - chapter11.������ -�ǽ�2
#include <stdio.h>

void get_sum_diff(int x, int y, int* p_sum, int* p_diff);

int main(void)
{
    int num1, num2;
    //int* num1,num2; //�������� ���� ����
    scanf("%d %d", &num1, &num2);
    get_sum_diff(num1,num2,&num1,&num2);
    printf("���ҵ��� ��=%d\n���ҵ��� ��=%d\n", num1,num2);
    return 0;
}

void get_sum_diff(int x, int y, int* p_sum, int* p_diff)
{
    *p_sum = x+y;
    *p_diff = x-y;

}