#include <stdio.h>
#include <string.h>
// 14�� - ����������  2��: 

int get_sum(int array);

int main(void)
{
    int arr[3][5]={
        {10,20,30,40,50},
        {1,2,3,4,5},
        {11,22,33,44,55}
    };

    int sum=0;
    
    for(int col=0 ; col<3 ; col++) //������
    {    
        for(int row=0; row<5; row++)//������
        {
            sum=sum+arr[col][row];
        } 
    }
    
    printf("�հ�: %d\n", sum);

    return 0;
}

int get_sum(int array);
