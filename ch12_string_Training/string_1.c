#include <stdio.h>
//���ڿ� ���� - 1��
int main(void)
{
    char c;
    printf("���ڸ� �Է��Ͻÿ�: ");
    scanf("%c", &c);
    printf("�ƽ�Ű�ڵ� ��=%d\n", toascii(c));
    return 0;

}
//c��� express 12�� �ؼ�(all)
//https://chuinggun.tistory.com/73

/*

����ȯ (int)c
�Լ� �̿� toascii(c) ****!! �ٵ� %d�� �Է¹޾ƾߵ� !!****

*/