#include <stdio.h>
#include <string.h>

int main(void)
{
    char cal[4];
    int num1, num2; //�Է¹��� ���� 2��
    int sum=0;

    printf("������ �Է��Ͻÿ�: ");
    scanf("%s %d %d", &cal, &num1, &num2);

    if(strcmp(cal,"add")==0) sum=num1+num2;
    else if(strcmp(cal,"add")==0) sum=num1-num2;
    else if(strcmp(cal,"mul")==0) sum=num1*num2;
    else if(strcmp(cal,"div")==0) sum=num1%num2;

    printf("������ ���: %d\n", sum);
    return 0;
}