#include <stdio.h>
#include <string.h>  //���ڿ� �Լ����� string.h�� ����Ǿ��ִ�.
#include <ctype.h>
//��ҹ��� �ٲ��ֱ� ���� �Լ� �������
//���� ó�� ���̺귯�� �Լ��� ���� 

int main(void)
{
    char c;

    while(1)
    {   
        printf("���ڸ� �Է��Ͻÿ�(����� .): ");
        c = getchar();

        //�˰���
        if( islower(c) ) //islower(c) : c�� �ҹ����ΰ�? ���̸� !0��ȯ �����̸� 0��ȯ
        {   
            putchar( toupper(c) ); //toupper(c) : c�� �빮�ڷ� �ٲ۴�
            printf("\n");
        }
        if( isupper(c) ) //isupper(c) : c�� �빮���ΰ�?
        {
            putchar( tolower(c) ); //tolower(c) : c�� �ҹ��ڷ� �ٲ۴�.
            printf("\n");
        }
        if( c=='.')
            break;

        fflush(stdin);//�Է� ���� �����?

    }
    return 0;

}

/*
gets()�� getchar()�� ���̴� �����ϱ�?
https://dragonseop.tistory.com/14
*/