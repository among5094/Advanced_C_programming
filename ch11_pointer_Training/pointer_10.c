#include <stdio.h>

//10�� - 2���� ������ �Է¹޾Ƽ� �ִ������� �ּҰ���� �Է¹ޱ�

void get_lem_gcd(int x, int y, int* P_lcm, int* p_gcd); 

int main(void)
{
    int num1, num2;
    printf("�� ���� ������ �Է��Ͻÿ�: ");
    scanf("%d %d", &num1, &num2);

    //get_lem_gcd�Լ�
    get_lem_gcd(num1, num2, &num1, &num2);

    //�ּҰ����, �ִ����� ǥ��
    printf("�ּҰ������ %d�Դϴ�.\n", num1);
    printf("�ִ����� %d�Դϴ�.\n", num2);

    return 0;
}   

void get_lem_gcd(int x, int y, int* P_lcm, int* p_gcd)
{
    //�ִ����� ���
    for(int i=1 ; i<=x && i<=y ; i++)
    {
        if(x%i==0 && y%i==0)
            *p_gcd = i;
    }
    //�ּҰ���� ���
    *P_lcm = (x*y) / *p_gcd;

}