#include <stdio.h>

//conver: �л��� ������ 100�� �������� "��ȯ"�ϴ� �Լ�
void convert(double* grades, double* scores, int size);
//grades���� �л��� ������ ����Ǿ��ְ�, scores�� 100������ ��ȯ�� ������ ����Ǿ��ִ� �迭��.

int main(void)
{
    //�迭 ����
    double grades[10]={2.2, 2.3, 2.4, 3.3, 4.3, 1.9, 3.9, 3.6, 2.2, 3.3}; //���� ����
    double scores[10]; //100�� �������� ȯ���� �迭
    convert(grades,scores,10);
}

void convert(double* grades, double* scores, int size)
{
    for(int i=0; i<10; i++)
    {
        printf("%.2lf ", *(grades+i) ); //���� ����� �迭 �����ֱ�
        scores[i]= (100/4.3)*grades[i]; //100�� �������� ȯ���� ���� scores�� ����
    }
    printf("\n");

    for(int i=0; i<10; i++)
        printf("%.2lf ", *(scores+i));
}