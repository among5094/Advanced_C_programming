#include <stdio.h>
#include <string.h> //strlen�Լ��� ���� �������

int str_chr(char* s, char c); //���ڿ� "����"�� �����ִ� �Լ�

int main(void)
{
    char s[100]; //�Է¹��� ���ڿ�
    char find_c; //����� �˰���� ����

    //gets�Լ�: ���ڿ��� �Է¹޴� �Լ�(���鵵 ����, scanf�� ���� �Ұ���)
    printf("���ڿ��� �Է��Ͻÿ�: ");
    gets(s);

    //������ �� ���� �Է¹ޱ�
    printf("������ �� ���ڸ� �Է��Ͻÿ�: ");
    scanf("%c", &find_c);

    //���-���ڿ� ���� count���ִ� "�Լ� ȣ��"
    printf("%c�� ����: %d\n", find_c, str_chr(s, find_c)); //call by address, call by value

    return 0;

}

int str_chr(char* s, char c) //������ ���ִ� �Լ�
{
    int count=0; //count_c�� �ϳ��� ���ö����� 1�� �������ֱ�
    for(int i=0; s[i] != '\0'; i++) //�ٸ� ���: for(int i=0; i<strlen(s) ; i++)
        if( s[i] == c )
            count++;
    
    return count;

}

/*
����
strlen

*/