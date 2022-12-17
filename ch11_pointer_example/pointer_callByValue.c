#include <stdio.h>
//값에 의한 호출
void swap(int x, int y);

int main(void)
{
    int a=100,b=200;
    printf("a=%d, b=%d\n", a,b); //a와 b값을 출력했으니 100,200

    swap(a,b); //값에 의한 호출, call by value
    printf("a=%d, b=%d\n", a,b);

    return 0;
}

void swap(int x, int y)
{
    int temp=0; //중간값을 저장하는 변수

    printf("x=%d, y=%d\n", x,y);
    temp=x;
    x=y;
    y=temp;
    printf("x=%d, y=%d\n", x,y);

}