#include <stdio.h> //11.08.화 - 수업

void sub(int list[], int a);

int main(void)
{
    int list[5]={0};
    int a=10;
    sub(list,a); //list배열, a는 변수
    printf("%d %d", list[0], a);
    
    return 0;
}

void sub(int list[], int a)
{
    for(int i=0;i<5;i++)
    list[i]++;
    
    a++;
}

/*
변수a와 매개변수a는 다르지만 list는 같다.

값을 복사하는 것 (복사) //값 넘기기 
원본이 넘어가는 것 == 주소를 넘기는 것 //주소 넘기기





*/