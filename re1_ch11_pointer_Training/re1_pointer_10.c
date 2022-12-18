#include <stdio.h>

void get_lcm_ged(int x, int y, int* p_lcm, int* p_gcd);
//p_lcm:�ּҰ����, p_gcd:�ִ�����

int main(void)
{
    int num1,num2;
    printf("�� ���� ������ �Է��Ͻÿ�:");
    scanf("%d %d", &num1, &num2);
    get_lcm_ged(num1, num2, &num1, &num2); 
    //num1,num2�� call by value�̰� &num1, &num2�� call by address
    return 0;
}

void get_lcm_ged(int x, int y, int* p_lcm, int* p_gcd)
{
    //�ִ����� ���
    for(int i=1 ; i<=x && i<=y ; i++) //0���� ������ �ǹ̰� ����. 1���� ����
        if(x%i==0 && y%i==0)
            *p_gcd = i;
    
    //�ּҰ���� ���
    *p_lcm = (x*y) / *p_gcd;

    //�ִ�����, �ּҰ���� ���
    printf("�ּҰ������ %d�Դϴ�.\n�ִ������� %d�Դϴ�.\n", *p_lcm, *p_gcd );
    //�ּҸ� ���� ���̱� ������ *�� �ٿ� ���� ������־�� �Ѵ�. 
}