#include <stdio.h>
//���������� ���α׷� ����p.614 ����1�� 

int main(void)
{
    int i=100;
    int *p=&i;
    int **q=&p;

    *p=200;
    printf("i=%d\n", i);
    
    **q=300;
    printf("i=%d\n", i);

    return 0;
}
/*
i==*p==**q
*/

