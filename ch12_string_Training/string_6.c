#include <stdio.h>
#include <string.h>  //���ڿ� �Լ����� string.h�� ����Ǿ� �ִ�.
#define SEZE 100

//���ڿ��� �޾Ƽ� ���ڿ��� ���Ե� ���ڸ� �빮�ڷ� ��ȯ�ϴ� �Լ�
void str_upper(char* s);

int main(void)
{
    int str[SEZE];
    printf("���ڿ��� �Է��Ͻÿ�: ");
    gets(str); //���ڿ��� �Է¹޴� �Լ�
    str_upper(str); //���ڿ��� ���Ե� ���ڸ� �빮�ڷ� ��ȯ�ϴ� �Լ� ȣ��
    printf("��ȯ�� ���ڿ�: %s\n", str);

    return 0;
}

void str_upper(char* s)
{
    for(int i=0; i< strlen(s) ;i++)//strlen(s):���ڿ�s�� ����
        if(s[i] >= 'a' && s[i] <= 'z')
            s[i]=s[i]-'a'+'A';
}