#include <stdio.h>
#include <stdlib.h>
//ch17-4��: �ܾ �Է¹޴� ����

char *get_word(); //�ܾ��� �ּҸ� ��ȯ�ϴ� �Լ�

int main(void)
{   
    char* ch;
    ch=get_word();
    printf("���� �޸𸮿� ����� �ܾ�� %s�Դϴ�.", ch);
    free(ch);
    return 0;
}

//�ܾ��� �ּҸ� ��ȯ�ϴ� �Լ�
char *get_word()
{
    char* s=(char*)malloc(50*sizeof(char));

    if(s == NULL)
    {
        printf("�޸� �Ҵ� ����\n");
        exit(1);
    }
    printf("�ܾ �Է��Ͻÿ�(�ִ�50����): ");
    scanf("%s", s);
    return s;
}