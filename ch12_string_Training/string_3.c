#include <stdio.h> //���ڿ� ���� 3�� - ���ڿ� ���� ����
#include <string.h> //strlen�Լ��� ���� �������

int str_chr(char* s, int c); //���ڿ� ���� count���ִ� �Լ�

int main(void)
{
    char arr_str[100]; //�Է¹��� ���ڿ�
    char count_c; //����� �˰���� ����

    printf("���ڿ��� �Է��Ͻÿ�: ");//gets�Լ�: ���ڿ��� �Է¹޴� �Լ�
    gets(arr_str);
    
    printf("������ �� ���ڸ� �Է��Ͻÿ�: ");//������ �� ���� �Է¹ޱ�
    scanf("%c", &count_c);

    printf("%c�� ����: %d\n", count_c, str_chr(arr_str, count_c));//���-���ڿ� ���� count���ִ� "�Լ� ȣ��"
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