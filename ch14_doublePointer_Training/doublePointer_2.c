#include <stdio.h>
#include <string.h>
// 14�� - ����������  2��: 
//https://m.blog.naver.com/PostView.naver?isHttpsRedirect=true&blogId=kbc91&logNo=220623922237

int get_sum(int array[], int size);

int main(void)
{
    //�������迭�� ���� �����ϱ�
    int arr[3][5] = {{10,20,30,40,50},
                     {1,2,3,4,5},
                     {11,22,33,44,55}};

    int (*pst)[5]=arr; // �迭 ������ ���� �� [] <- ���� ���� 2���� �迭�� �� ũ��� �����ؾ���
    
    // �� ���� �� ���� ���ϱ�
    int sum=0;
    for(int k=0;k<3;k++)
    {
        for(int i=0; i<5;i++) // ���⼭ i�� 2���� �迭�� �� �ε���
            sum = sum + *(*(pst+k)+i); // *(pst) --> ��, *((��)+i) --> ��
    }
    printf("�հ�: %d\n", sum);
    
    return 0;
}
