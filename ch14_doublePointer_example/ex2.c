#include <stdio.h>//���������� ���α׷� ����p.614 ����2�� 
/*
���������Ͱ� ���� ���� ���Ǵ� ��Ȳ��
�ܺο��� ���ǵ� ������ ���� �Լ��� �μ��� �޾Ƽ� �����Ϸ��� �ϴ� ���
*/
void set_pointer(char **q);

int main(void)
{
    char *p;
    set_pointer(&p);//������ p�� �ּҸ� �����Ѵ�
    printf("������ �ݾ�: %s\n", p);

    return 0;
}

void set_pointer(char **q){
    *q="All that glisters is not gold.";
}
/*
�ܺο��� ����� ������ ���� �μ��� �޾Ƽ� �����Ϸ��� 
�ݵ�� ������ �ּҸ� �Լ��� �����ؾ��Ѵ�. �� �ݵ�� call by adress�� �ؾ��Ѵٴ� ��
*/