#include <stdio.h>
//������ ����
int main(void)
{
    int i=10; //i�� �ּҰ� 100�̶�� ġ��(ppt���鼭)
    int* pi; //�ּҸ� ���� �� �ִ� �������� ���� pi����
    pi = &i; //i�� �ּҰ��� pi�� ���� �׷� pi�� 100�� ��
    
    printf("i�� �ּ�: %d\n", &i);
    
    return 0;
}