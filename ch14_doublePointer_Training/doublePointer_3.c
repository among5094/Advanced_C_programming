#include <stdio.h>

//14��-������ Ȱ��, 2���� �迭�� �� ���ϱ�
int main(void)
{
    //�������迭�� �л��� ���� �����ϱ�
    int score[3][5]={
        {60,50,20,30,40},
        {10,80,90,50,36},
        {40,27,45,87,38}
    };
    int (*pst)[5]=score;// �迭 ������ ���� �� [] <- ���� ���� 2���� �迭�� �� ũ��� �����ؾ���
    
    //col�� ��, row�� ��
    int sum=0;
    for(int col=0; col<3; col++)
    {
        for(int row=0; row<5; row++)
            sum = sum + *(*(pst+col)+row); //*(pst+col)�� ����,  *(�� ����+row);
            
        printf("%d���� ��հ�=%d\n", col, sum/5);//%lf�ϰ� (double)sum/5�ϸ� �Ҽ����ڸ����� ���� �� ����
    }

    return 0;
}