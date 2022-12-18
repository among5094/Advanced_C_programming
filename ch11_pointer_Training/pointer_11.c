#include <stdio.h>

void merge(int* A, int* B, int* C, int size); //�� ���� ���� ���ϴ� �Լ�

int main(void)
{
    int A[]={2,5,7,8};
    int B[]={1,3,4,6};
    int C[8]={0};
    merge(A,B,C,8);

    // Merge �Լ� ���� �� ���ĵ� �迭 C ����ϱ�
    printf("C[]={ ");
    for (int i = 0;i <8; i++)
        printf("%d ", C[i]);
    printf("}");

    return 0;
}

void merge(int* A, int* B, int* C, int size)
{
    //�迭 A�����ֱ�
    printf("A[]= {");
    for(int i=0; i<size/2 ; i++)
        printf("%d ", A[i]);
    printf("}");

    //�迭 B�����ֱ�
    printf("B[]= {");
    for(int i=0; i<size/2 ; i++)
        printf("%d ", B[i]);
    printf("}");

    //---------�� ���� �迭�� �ִ� �κ��� �迭c�� �ű�� �κ�-----
    int A_index= 0, B_index = 0, C_index = 0; //���� �ش� �迭�� �ε����� �ǹ���
   
    while (C_index != size) // c�� �迭 C�� ������ �ε����� ��Ÿ�� �� ���� �ݺ�
    {
        if (A[A_index] < B[B_index])//���� A�� �� ������?
            C[C_index++] = A[A_index++]; // �ش� ���Ҹ� C �迭�� �ְ�, A�� C�� �ε����� ������Ų��
        else if (A[A_index] > B[B_index]) // ���� B�� �� ������?
            C[C_index++] = B[B_index++]; // �ش� ���Ҹ� C �迭�� �ִ´�, �迭 �ε����� ���� ������Ų��

        //---------���� ������ �迭�� �ִ� ����� ó�� �κ�-----
        
        //A�迭�� ���� �����ٸ�?
        if (A_index == size/2) //A_index�� 4�̰�, size�� 8�ε� 2������ 4��. �� 4�� �ǹ���
        { 
            while (B_index != size/2) //B �迭�� ������ ������
                C[C_index++] = B[B_index++]; // B �迭�� ���� ��ҵ��� C �迭�� �ְ�, �迭 �ε����� ���� ������Ų��
        }
        //B �迭�� ���� �����ٸ�?
        else if (B_index == size/2)
        {
            while (A_index != size/2) // A �迭�� ������ ������
                C[C_index++] = A[A_index++]; // A �迭�� ���� ��ҵ��� C �迭�� �ְ�, �迭 �ε����� ���� ������Ų��
        }
    }

}
// A �迭�� ���� �����ٸ�? (3�� �ε������� C�� �ְ� a++�� �����ϹǷ� a�� size/2�� ��)