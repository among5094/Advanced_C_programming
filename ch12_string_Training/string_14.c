#include <stdio.h>
#include <string.h>
//���ڿ� - 14��: ã�� �ٲٱ�
int main()
{
    char s[80]=""; //�Է¹��� ���ڿ�
    char find[15]=""; //ã�� ���ڿ�
    char change[15]=""; //�ٲ� ���ڿ�
    char space=" "; //space�� ������ �ǹ�
    char *pst; //pointer string, �������� ���ڿ�


    printf("���ڿ��� �Է��Ͻÿ�: ");
    gets(s);
    printf("ã�� ���ڿ�: ");
    gets(find);
    printf("�ٲ� ���ڿ�: ");
    gets(change);


    while(pst != NULL )// ���ڿ��� ���� �ƴϸ� ���ѷ���
    {
        

    }

    return 0;
}

//  A fool and his money are sonn parted.
/*
strstr()�Լ��� ����...
strstr�Լ��� ����ϸ� ��� ���ڿ����� ã���� �ϴ� ���ڿ��� �߰��ϸ� �ش� ��ġ�� "�ּҰ�"�� ��ȯ�ϰ� ����˴ϴ�.

������ �ڵ� ��ũ(���丵ũ): 
https://inhwascope.tistory.com/93

��ū �Լ��� ���� ����Ǵ� ��ũ(������ �ذ��ϱ� ���� �о�� ����):
https://kingmaron.tistory.com/160


*/