#include <stdio.h>
#include <string.h>
//14��-������ Ȱ�� , 3��- 
int main(void)
{
    //�������迭�� �л��� ���� �����ϱ�
    int score[3][5]={
        {60,50,20,30,40},
        {10,80,90,50,36},
        {39,27,45,87,38}
    };
    int (*pst)[5]=score;// �迭 ������ ���� �� [] <- ���� ���� 2���� �迭�� �� ũ��� �����ؾ���
    
    //����� ���ϱ� ���ؼ� ����
    int sum=0;
    for(int col=0; col<3; col++)
    {
        for(int row=0; row<5; row++)
        {
            sum = sum + *(*(pst+col)+row);
            
        }
        printf("%d���� ��հ�=%d\n", col, sum/5);
    }

    return 0;
}