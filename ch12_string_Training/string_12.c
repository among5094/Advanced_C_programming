#include <stdio.h>
#include <string.h>
#include <ctype.h>
//���ڿ� 12�� - ���� �̸� �и�

int main(void)
{
    char s[100]; //���ڿ�
    char *ptr[100];

    //���� �̸� �Է¹ޱ�
    printf("���� �̸��� �빮�ڷ� �Է��Ͻÿ�: ");
    gets(s);
    while(isupper(s)==0) //�빮�ڰ� �´ٸ�?
    {
        strtok(s," "); //���ڿ�s���� ���� �и�

    }
    tolower(s); //���ڿ�s�� �ҹ��ڷ� �ٲ۴�.

    printf("%s ", tolower(s));

    return 0;
}

/*
puts()��?
C��� ��Ÿ���� ���ڿ��� char*, char[] Ÿ���� ǥ�� ���(stdout)���� ������ �Լ��Դϴ�. 
puts �Լ��� ���ڿ��� ����� ������ �ϰ��� ����(\n)�� ������ ������ �ڵ������� ���� �ٲ�� �˴ϴ�.
*/