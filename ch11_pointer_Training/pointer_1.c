#include <stdio.h>
//c��� express - chapter11.������ -�ǽ�1
int main(void)
{
    int x = 0x12345678;
    unsigned char *xp = (char*)&x;

    printf("����Ʈ ����: %x %x %x %x\n", xp[0], xp[1], xp[2], xp[3]);
    return 0;
}
/*
- 0x�� 16���� ǥ����

0x12 //1����Ʈ�� �ǹ�
0x1234 //2����Ʈ�� �ǹ�
0x12345678 //4����Ʈ�� �ǹ�

*/