#include <stdio.h>
#include <ctype.h>// toupper�� ���� �����ϴ� �Լ�

int main(void)
{
    char c; //���ڿ� ����

    while(1)
    {
        printf("���ڸ� �Է��Ͻÿ�:");
        c=getchar();
        getchar(); // �ٹٲ� ���� ���Ÿ� ���� getchar() �� �� �� ȣ��

        if(c == '.')
            break;
        else if (c >= 'A' && c <= 'Z')      // �Է¹��� ���ڰ� �빮�ڸ�
            printf("%c\n", tolower(c));    // �ҹ��ڷ� �ٲ㼭 ���
        else if (c >= 'a' && c <= 'z') // ���ڰ� �ҹ��ڸ�
            printf("%c\n", toupper(c));    // �빮�ڷ� �ٲ㼭 ���
    }
    return 0;
}