#include <stdio.h>
//포인터 선언
int main(void)
{
    int i=10; //i의 주소가 100이라고 치자(ppt보면서)
    int* pi; //주소를 받을 수 있는 포인터형 변수 pi선언
    pi = &i; //i의 주소값을 pi에 대입 그럼 pi는 100이 됨
    
    printf("i의 주소: %d\n", &i);
    
    return 0;
}