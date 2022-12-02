#include <stdio.h>
//c언어 express - chapter11.포인터 -실습1
int main(void)
{
    int x = 0x12345678;
    unsigned char *xp = (char*)&x;

    printf("바이트 순서: %x %x %x %x\n", xp[0], xp[1], xp[2], xp[3]);
    return 0;
}
/*
- 0x는 16진법 표현임

0x12 //1바이트를 의미
0x1234 //2바이트를 의미
0x12345678 //4바이트를 의미

*/