#include <stdio.h>

void get_int(int* px, int* py);

int main(void)
{
    int num1,num2;
    printf("�� ���� ������ �Է��Ͻÿ�(��: 10 20): ");
    scanf("%d %d", &num1, &num2);
    get_int(num1,num2);
    return 0;
}

void get_int(int* px, int* py)
{
    printf("%d", *px+*py);
}