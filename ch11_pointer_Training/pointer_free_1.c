#include <stdio.h>

int main(void)
{
    int i = 10;
    int* p;
    
    p = &i;
    printf("%d\n", *p); //i가 가리키는 &i의 값
    printf("%d\n", p); //i가 가리키는 &i의주소
    

    return 0;
}