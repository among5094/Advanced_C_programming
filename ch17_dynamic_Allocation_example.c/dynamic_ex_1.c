#include <stdio.h>
#include <stdlib.h> //�����޸� malloc()�� ���ؼ�
//����2 - ���� ó�� ���α׷�
int main(void)
{ 
    //�л� �� �Է¹ޱ�
    int num=0;
    printf("�л��� ��: ");
    scanf("%d", &num);
    
    int* score=(int*)malloc(num*sizeof(int));
    //�迭�� ũ�Ⱑ num�� ũ�⸸ŭ �Ҵ��
    //sizeof(�ڷ���) : �ڷ����� ũ�⸦ ����.

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
