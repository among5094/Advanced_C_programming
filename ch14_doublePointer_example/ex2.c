#include <stdio.h>//이중포인터 프로그램 교재p.614 예시2번 
/*
이중포인터가 가장 많이 사용되는 상황은
외부에서 정의된 포인터 값을 함수의 인수로 받아서 변경하려고 하는 경우
*/
void set_pointer(char **q);

int main(void)
{
    char *p;
    set_pointer(&p);//포인터 p의 주소를 전달한다
    printf("오늘의 격언: %s\n", p);

    return 0;
}

void set_pointer(char **q){
    *q="All that glisters is not gold.";
}
/*
외부에서 선언된 변수의 값을 인수로 받아서 변경하려면 
반드시 변수의 주소를 함수에 전달해야한다. 즉 반드시 call by adress를 해야한다는 것
*/