#include <stdio.h>

void arr_copy(int* A, int* B, int size); //�迭�� �����ϴ� �Լ�

int main(void)
{
    int arr1[]={1,2,3,0,0,0,0}; //�迭 �̸��� A�̵� arr1�̵� ����� ����!
    int arr2[]={0};
    int size=sizeof(arr1)/sizeof(arr1[0]); //�迭�� ũ��
    arr_copy(arr1,arr2,size);//�迭A�� ù ��° �ּҰ� ����
    return 0;
}

void arr_copy(int* A, int* B, int size) //�迭�� �����ϴ� �Լ�
{
    //���� �迭A[]�����ֱ�
    printf("A={ ");
    for(int i=0; i<size;i++)
        printf("%d ", *(A+i) ); //*(A+i)���� A[i]�� �ȴ�. 
    printf(" }");

    //�迭 A�� ����ִ� �迭B�� �����ϱ�
    for(int i=0; i<size;i++)
        B[i]=A[i];
    printf("\n");

    //�迭A�� ����� �迭B �����ֱ�
    printf("B={ ");
    for(int i=0; i<size;i++)
        printf("%d ", B[i]);
    printf(" }");

}