#include <stdio.h>
#include <string.h>
#include <ctype.h>
//���ڿ� 11�� - �Ųٷ� ��� //�ٵ� ���� �𸣰����Ф�

int main(void)
{
    char s[100];
    char *ptr[100];
    int i=0;
    int j;

    //���ڿ� �Է¹ޱ�
    puts("���ڿ��� �Է��Ͻÿ�: ");
    gets(s);
    ptr[0]=strtok(s," "); //�� �κ� �� �𸣰��� 

    while(ptr[i] != NULL)
    {
        ptr[i+1]=strtok(NULL," ");
        i++;
    }
    
    for (j=i-1;j>=0;j--)
        printf("%s ", ptr[j]);

    return 0;
}

/*
strtok(s,""): ���ڿ� s�� " "������ �������� �ڸ���
�� ����� ���ڿ��� �и��ϴ� ������ ��
*/