#include <stdio.h>

int main(void)
{
    int i = 10;
    int* p;
    
    p = &i;
    printf("%d\n", *p); //i�� ����Ű�� &i�� ��
    printf("%d\n", p); //i�� ����Ű�� &i���ּ�
    

    return 0;
}