#include <stdio.h>

int search(int* A, int size, int search_value); //search_value = ã�� ���� ��

int main(void)
{
    int a[10]={ 100, 200, 300, 400, 500, 600, 700, 800, 900, 1000 };
    search(a, 10, 600);
    
}   

int search(int* A, int size, int search_value)
{
    //���� �迭a�� �����ֱ�
    printf("A[ ] = { ");
    for(int i=0;i<size;i++)
        printf("%d ", A[i]);
    printf(" }\n");

    //search_value ã�� ���� �κ�
    int number=0;
    for(int i=0; i<size ; i++)
    {
        number++;
        if( A[i] == search_value )
            printf("������ %d������ ����� �ε���=%d\n", search_value, number);
        else
            continue;
    }
    return 0;

}