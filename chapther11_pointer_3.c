#include <stdio.h> //11.08.ȭ - ����

void sub(int list[], int a);

int main(void)
{
    int list[5]={0};
    int a=10;
    sub(list,a); //list�迭, a�� ����
    printf("%d %d", list[0], a);
    
    return 0;
}

void sub(int list[], int a)
{
    for(int i=0;i<5;i++)
    list[i]++;
    
    a++;
}

/*
����a�� �Ű�����a�� �ٸ����� list�� ����.

���� �����ϴ� �� (����) //�� �ѱ�� 
������ �Ѿ�� �� == �ּҸ� �ѱ�� �� //�ּ� �ѱ��





*/