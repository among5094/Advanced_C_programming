#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//c��� express - chapter11.������ -�ǽ�3

void arr_fill(int* A, int size);

int main(void)
{
    int arr[20]; //���⿡ 20�� �̸� ���� ���� �Ҵ��� �ƴ��� �ʳ�? ���� �Ҵ��� �ƴ϶� ������� �ǰ�?
    arr_fill(arr,20);
    
    for(int i=0;i<20;i++)
        printf("%d ", arr[i]);

    return 0;
}

void arr_fill(int* A, int size)
{

    srand(time(NULL));
    for(int i=0;i<size;i++)
        A[i]=rand();

}