#include <stdio.h>
//����ü04�� - ���Ҽ� ���� ����
struct complex //����ü ����
{
    double real; 
    double imag; 
};

//����ü �Լ�
struct complex complex_add(struct complex x1, struct complex x2); 

int main(void)
{
    struct complex c1;
    struct complex c2;

    //���Ҽ��� ù ��° ��,��� �κ�
    printf("ù ��° ���Ҽ��� �Ǽ��κ�: ");
    scanf("%lf", &c1.real);
    printf("ù ��° ���Ҽ��� ����κ�: ");
    scanf("%lf", &c1.imag);

    //���Ҽ��� �� ��° ��,��� �κ�
    printf("�� ��° ���Ҽ��� �Ǽ��κ�: ");
    scanf("%lf", &c2.real);
    printf("�� ��° ���Ҽ��� ����κ�: ");
    scanf("%lf", &c2.imag);

    //�Լ� ȣ��
    complex_add(c1, c2);

    return 0;
}

struct complex complex_add(struct complex x1, struct complex x2)
{
    struct complex result;
    result.real =x1.real+x2.real;
    result.imag=x2.imag+x2.imag;

    printf("���Ҽ��� ��:\n");
    printf("�Ǽ���: %lf\n", result.real);
    printf("�����: %lf\n", result.imag);
}


