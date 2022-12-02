#include <stdio.h>
//구조체 13
struct account
{
    int number; //계좌번호
    char name[20]; //이름
    int balance; //잔액
};

int main(void)
{
    struct account s;
    
    //구조체 초기화
    s.number=302125051294;
    strcpy(s.name,"혜멍뭉이");
    s.balance=10520000;

    printf("{%d, %s, %d}", s.number, s.name, s.balance);
    return 0;

}