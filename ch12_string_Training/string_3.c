#include <stdio.h>
#include <string.h> //strlen�Լ��� ���� �������

//���ڿ� ���� 3�� - ���ڿ� ���� ����

int str_chr(char* s, int c); //���ڿ� ���� count���ִ� �Լ�

int main(void)
{
    char arr_str[100]; //�Է¹��� ���ڿ�
    char count_c; //����� �˰���� ����

    //gets�Լ�: ���ڿ��� �Է¹޴� �Լ�
    printf("���ڿ��� �Է��Ͻÿ�: ");
    gets(arr_str); //gets�� 

    //������ �� ���� �Է¹ޱ�
    printf("������ �� ���ڸ� �Է��Ͻÿ�: ");
    scanf("%c", &count_c);

    //���-���ڿ� ���� count���ִ� "�Լ� ȣ��"
    printf("%c�� ����: %d\n", count_c, str_chr(arr_str, count_c));

    return 0;

}

int str_chr(char* s, int c)
{
    int count=0; //count_c�� �ϳ��� ���ö����� 1�� �������ֱ�

    for(int i=0; i<strlen(s) ; i++)
    {
        if( s[i] == (char)c )
            count++;
    }
    return count;

}

/*
����
strlen

*/