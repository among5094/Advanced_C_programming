#include <stdio.h>
//ch14 ���������� -5��(����p.615)
//�ܺο��� ����� ������ ���� �μ��� �޾Ƽ� �����Ϸ��� �ݵ�� ������ �ּ�(call by address)�� �Լ��� �����ؾ��Ѵ�.
int set_max_ptr(int m[], int size, int **pmax); //�����Ͱ� �迭�� ���� ū ���� ����Ű�� �ϴ� �Լ�

int main(void)
{
    int m[6]={5,6,1,3,7,9}; //int�� �迭
    int *pmax; //�迭 m�� ���� �߿��� ���� ū ���� pmax�� ����Ų��.

    set_max_ptr(m,6,&pmax);
    //�ܺο��� ����� ������ ���� �μ��� �޾Ƽ� �����Ϸ��� �ݵ�� ������ �ּ�(call by address)�� �Լ��� �����ؾ��Ѵ�.
    return 0;
}

int set_max_ptr(int m[], int size, int **pmax)
{   
    //�ִ밪�� ���ϴ� �κ�
    int max=m[0]; //�켱 �ִ밪�� �迭0��°�� >����<�ϱ�
    for(int i=0; i<size; i++)
    {
        if(max<m[i])
            max=m[i];
    }
    printf("���� ū ����: %d\n", max);
}