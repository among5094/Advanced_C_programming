#include <stdio.h>

//����ü ����
struct point {int x,y; };

struct circle{
    struct point center; //���� �߽�
    double radius; //���� ������
};

//�Լ� ����
double area(struct circle c); //���� ������ ����ϴ� �Լ�
double perimeter(struct circle c); //���� �ѷ��� ����ϴ� �Լ�

int main(void)
{
    struct point s;


    return 0;
}