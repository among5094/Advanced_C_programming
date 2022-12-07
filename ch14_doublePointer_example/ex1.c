#include <stdio.h>
//이중포인터 프로그램 교재p.614 예시1번 

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

