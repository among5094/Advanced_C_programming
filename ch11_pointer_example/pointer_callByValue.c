#include <stdio.h>
//���� ���� ȣ��
void swap(int x, int y);

int main(void)
{
    int a=100,b=200;
    printf("a=%d, b=%d\n", a,b); //a�� b���� ��������� 100,200

    swap(a,b); //���� ���� ȣ��, call by value
    printf("a=%d, b=%d\n", a,b);

    return 0;
}

void swap(int x, int y)
{
    int temp=0; //�߰����� �����ϴ� ����

    printf("x=%d, y=%d\n", x,y);
    temp=x;
    x=y;
    y=temp;
    printf("x=%d, y=%d\n", x,y);

}