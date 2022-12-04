#include <stdio.h>
#define PI 3.141592 //PI�����ϱ�

//����ü ���� �κ�
struct point {int x, y; }; //���� x��ǥ, y��ǥ

struct circle{
    struct point center; //���� �߽�
    double radius; //���� ������
};

//�Լ� ���� �κ�
double area(struct circle c); //���� ������ ����ϴ� �Լ�
double perimeter(struct circle c); //���� �ѷ��� ����ϴ� �Լ�

int main(void)
{
    struct point axis;//���� x��ǥ, y��ǥ
    struct circle r; //���� ������

    printf("���� �߽�: ");
    scanf("%d %d", &axis.x, &axis.y);

    printf("���� ������: ");
    scanf("%lf", &r.radius);

    //���� ������ ���� �Լ� ȣ��
    printf("���� ����=: %lf, ���� �ѷ�= %lf\n", area(r), perimeter(r));

    return 0;
}

//���� ������ ����ϴ� �Լ� ����
double area(struct circle c) 
{
    double area; //���� ����
    area = (c.radius*c.radius)*PI;
    return area;

}
//���� �ѷ��� ����ϴ� �Լ� ����
double perimeter(struct circle c) 
{
    double circumference; //���� �ѷ�
    circumference = 2*PI*c.radius; 
    return circumference;

}