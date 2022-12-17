#include <stdio.h>

void swap(int* px, int* py);

int main(void)
{
    int a=100, b=200;
    printf("a=%d, b=%d\n", a,b);
    swap(&a, &b); //주소에 의한 호출

    printf("a=%d, b=%d\n", a,b);
    return 0;
}

void swap(int* px, int* py)
{
    int temp;
    printf("*px=%d, *py=%d\n", *px,*py);

    temp=*px;
    *px=*py;
    *py=temp;

    printf("*px=%d, *py=%d\n", *px,*py);

}