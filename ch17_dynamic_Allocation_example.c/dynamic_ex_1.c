#include <stdio.h>
#include <stdlib.h> //�����޸� malloc()�� ���ؼ�
//����2 - ���� ó�� ���α׷�
int main(void)
{
    int num=0; //�Է¹��� �л� ��
    int* score;
    score=(int*)malloc(10*sizeof(int)); //size 10�� �����Ҵ�

    printf("�л��� ��: ");
    scanf("%d", &num);

    //���� �޾Ƽ� ����
    for(int i=0; i<num; i++)
    {
        printf("�л� %d�� ����: ", i+1);
        scanf("%d", &score[i]);
    }
    printf("==================\n");
        
    //�Է� ���� ���� ���
    for(int i=0; i<num; i++)
        printf("�л� %d�� ����: %d \n", i+1, score[i]);

    free(score); //free �� �ص� ������ �Ǵµ� �޸𸮸� ���� ��Ƹ���
    return 0;
}