#include <stdio.h>
#include <stdlib.h> //rand�Լ��� ����
#include <time.h> //�Ź� rand�Լ��� �ٸ��� �ϴ� �������

//arr�迭�� ù �ּҰ��� ���޹��� �迭 A�� rand���� �ִ� �Լ�
void array__fill(int* A, int size);

int main(void)
{
    int arr[10]={0};
    array_fill(arr,10); 
    return 0;
}

void array__fill(int* A, int size)
{
    for(int i=0; i<size ; i++)
    {
        A[i]=rand()%100; //0~99���� �����Ǵ� ������ �迭A[i]�� �����
        printf("%d ", *(A+i)); //�� ���� ������� �� A[i] 
    }
    
}
/*
�ǵ��
1. ���� Ǯ���� �������� ���� �� ª�� ���.
�Լ����� �����Լ��� ������ �ʰ� �Լ��� for���� �ٷ� ���. 
2. A[i]���� *(A+i)�� Ǯ ���� �ִ�. -> �ٸ� �����Ϳ� ���� ���ذ� ����� �� ����. 
*/  