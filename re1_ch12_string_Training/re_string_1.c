#include <stdio.h>

int main(void)
{
    char ch; 
    printf("���ڸ� �Է��Ͻÿ�: ");
    scanf("%c", &ch);
    printf("�ƽ�Ű�ڵ尪=%d", ch);
    return 0;
}

/*�ƽ�Ű�ڵ� ����ϴ� ���
1. ���ڷ� �Է¹��� ���¸� ������ ����Ѵ�. %d��� 
2. printf("�ƽ�Ű�ڵ� ��=%d\n", toascii(c)); -> toascii(c)�Լ���? c�� �ƽ�Ű�ڵ�� �ٲ۴�.
*/