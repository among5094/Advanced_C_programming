#include <stdio.h> //gets�Լ� ������� stdio��
#include <string.h>

//���ڿ� ���� - 2��

void Deletspace(char* string); //������ �����ؼ� ���ڿ��� ������ִ� �Լ�

int main(void)
{
    char str[50]; //49�ڱ��� �Է¹��� �� ����

    printf("���� ���ڰ� �ִ� ���ڿ��� �Է��Ͻÿ�: ");
    gets(str);
    /*
    scanf�� ���� ���� �Ұ��� �׷��� gets�Լ� ����ߵ�
    */
    Deletspace(str);

    return 0;

}

void Deletspace(char* string)
{
    for(int i=0; string[i] != '0' ; i++)
    {
        if(string[i] != ' ')
            printf("%c", string[i]);

    }
}

/*
����

gets�Լ��� ���� �ο� ���� ����Ʈ
https://blockdmask.tistory.com/343

scanf�� ���� ���� �Ұ���


*/