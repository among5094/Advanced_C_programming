#include <stdio.h>

int main(void)
{
    char s[100];
    int count=0;
    printf("���ڿ��� �Է��Ͻÿ�: ");
    gets(s);
    for(int i=0; s[i] != NULL ; i++)
    {
        if(s[i]==',' || s[i]=='.')
            count++;
    }
    printf("�������� ������ %d�Դϴ�.\n", count);
    return 0;
}

//�ٸ� ���
//for(int i=0; i<strlen(s) ; i++)
//������� #include <string.h>