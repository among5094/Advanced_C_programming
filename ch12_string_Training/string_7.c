#include <stdio.h>
#include <string.h>  //���ڿ� �Լ����� string.h�� ����Ǿ� �ִ�.

int get_response(char* prompt);

int main(void)
{
    char str[100];
    printf("������ �Ͻðڽ��ϱ�?(����� .): ");
    gets(str);
    get_response(str);

    if( get_response(str) == 1)
        printf("�������� �亯\n");
    else if(get_response(str) == 0)
        printf("�������� �亯\n");

    return 0;
}
/*
strcmp(s1,s2): s1�� s2�� ���Ѵ�.
������ 0��ȯ, s1<s2�̸� ����,s1>s2 �����ȯ
*/
int get_response(char* prompt)
{
    if( !strcmp(prompt, "yes"))
        return 1;
    else if( !strcmp(prompt, "ok"))
        return 1;
    else if( !strcmp(prompt, "no"))
        return 0;

}
