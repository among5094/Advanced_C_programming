#include <stdio.h>
#include <string.h>
#include <ctype.h>
//���ڿ� 10�� - ȸ��
int main(void)
{
    char s[100];
    
    printf("���ڿ��� �Է��Ͻÿ�: ");
    scanf("%s", &s);

    int len = strlen(s);
    
    for (int i=0;i<len/2;i++)
    {
        if(s[i] != s[len-i-1])
        {
            printf("ȸ���� �ƴ�\n");
            return 0;
        }
    }
    printf("ȸ����\n");
    
    return 0;
}