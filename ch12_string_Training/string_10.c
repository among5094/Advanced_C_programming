#include <stdio.h>
#include <string.h>
#include <ctype.h>
//���ڿ� 10�� - ȸ��

int palindrome(s);

int main(void)
{
    char s[100];
    
    printf("���ڿ��� �Է��Ͻÿ�: ");
    scanf("%s", &s);
    palindrome(s); //call by address    
    return 0;
}

int palindrome(s)
{    
    for (int i=0 ; i<strlen(s)/2 ;i++) //������ �������� �˻����� ��
    {
        if(s[i] != s[strlen(s)-i-1]) // ó������ ������ ���ڿ��� ������ ������ ���ڿ��� �ϳ��� �ٸ���?
        {
            printf("ȸ���� �ƴ�\n"); //ȸ���� �ƴ�
            return 0;
        }
    }
    printf("ȸ����\n"); //ó������ ������ ���ڿ��� ������ ������ ���ڿ��� �ٸ��� ������? -> ȸ����

}