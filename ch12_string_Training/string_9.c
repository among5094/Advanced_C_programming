#include <stdio.h>
#include <string.h>
#include <ctype.h> //isupper(c)�� �Լ��� ���� �������
//���ڿ� 9��
int main(void)
{
    char s[100]={0};
    printf("�ؽ�Ʈ�� �Է��Ͻÿ�: ");
    gets(s);

    if( !isupper(s[0])) //isupper(c): c�� �빮���ΰ�? ���̸� 1��ȯ(!0), �����̸� 0��ȯ ��, s[0]�� �ҹ��ڳİ� ���� ��
        s[0] = toupper(s[0]); //toupper(c): c�� �빮�ڷ� �ٲ۴�.
    
    if( s[strlen(s)-1] != '.' ) //s[strlen(s)-1]��: ������ ���� ��, ������ ���ڿ� ���� ������
    {
        s[strlen(s)] = '.'; //���� ������ ���ڿ� �� �־��ֱ�
        s[strlen(s)+1] = NULL;//���� ������ ���� 1ĭ �ڿ� null�־ ���ڿ��� ���� �˸�
    }

    printf("��� �ؽ�Ʈ ���: %s\n", s);

    return 0;
}
