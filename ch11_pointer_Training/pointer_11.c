#include <stdio.h>
#include <string.h> //���ڿ� �Լ��� ���� �������

//12�� - 2���� �迭�� ���ļ� �ϳ��� ���ĵ� �迭C[]�� ����� �Լ� �ۼ�
//pointer free code2���� ����
void merge(int* A, int* B, int* C, int size);

int main(void)
{
    int Aarr[4]={2,5,7,8};
    int Barr[4]={1,3,4,6};
    int Carr[50];

    //�պ��ϴ� �Լ� ȣ��
    merge(Aarr, Barr, Carr, 4); 


    return 0;
}   

 void merge(int* A, int* B, int* C, int size)
{
    //���� �迭 Aarr �����ֱ�
    printf("A[ ] = { ");
    for(int i=0;i<size;i++)
        printf("%d ", A[i]);
    printf("}\n");

    //���� �迭 Barr �����ֱ�
    printf("B[ ] = { ");
    for(int i=0;i<size;i++)
        printf("%d ", B[i]);
    printf("}\n");
    
    printf("C[ ] = { ");
    //�迭 Aarr�� Barr ��ġ�� �˰���
    for(int i=0 ; i<50 ; i++)
    {
        if(A[i]<B[i])
        {
            strcpy(C[i], A[i]);
            A[i]+1; //�迭�� index����
            printf("%d ", C[i]);
        }
        else if(A[i]>B[i])
        {
            strcpy(C[i], B[i]);
            (B[i]+1);
            printf("%d ", C[i]);
        }

    }

    //�պ��� �迭 Carar �����ֱ�
    
    for(int i=0;i<size;i++)
        printf("%d ", C[i]);
    printf("}\n");

    

}

/*
�������� �迭�� index���� 

int arr[3]={5, 10, 15}
*arr >> 5
*arr+1 >> 6
*(arr+1) >> 10



���� ��α�: https://deftkang.tistory.com/40
*/