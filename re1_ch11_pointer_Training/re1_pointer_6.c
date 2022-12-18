#include <stdio.h>

void arr_copy(int* A, int* B, int size); //�迭�� �����ϴ� �Լ�

int main(void)
{
    int A[]={1,2,3,0,0,0,0};
    int B[]={0};
    int size=sizeof(A)/sizeof(A[0]); //�迭�� ũ��
    arr_copy(A,B,size);//�迭A�� ù ��° �ּҰ� ����
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