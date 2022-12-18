#include <stdio.h>

void arr_print(int* A, int size);

int main(void)
{
    int array[]={1,2,6,3,6,2};
    int size=sizeof(array)/sizeof(array[0]); //�迭�� ũ��
    arr_print(array,size);
    return 0;
}

void arr_print(int* A, int size)
{
    printf("A[] = { ");
    for(int i=0; i<size;i++)
        printf("%d ", *(A+i)); //A[i]�� ��!
    printf(" }\n");
    
}

/*�ǵ��:
1. ������ Ǯ�̴� size�� �̸� �����µ� ������ size�� sizeof�� �̿��ؼ� ���� ���ߴ�.
int size=sizeof(array)/sizeof(array[0]); //�迭�� ũ��
*/