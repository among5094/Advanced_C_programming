#include <stdio.h>

void arraycopy(int *from, int *to, int size);
void arrayprint(int *p, int size);

int main(void)
{
    int to[] = {13, 34, 28, 56, 73, 45};
    int from[] = {3, 5, 1, 6, 7};
    arraycopy(from, to, 5);
    arrayprint(from, 5);
    arrayprint(to, 6);
    return 0;
}

//�迭 from�� ó�� ���Һ��� size�������� ���� ���� �迭to�� ������ ������ ���ҿ� �����ϴ� �Լ�
void arraycopy(int *from, int *to, int size)
{
    for(int i=0; i<size ; i++)
        *(to+i)=*(from+i);
}
//�迭p�� ����ϴ� �κ�
void arrayprint(int *p, int size)
{
    printf("\n");
    for(int i=0; i<size; i++)
        printf("%d ", *(p+i));

}