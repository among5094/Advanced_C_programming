#include <stdio.h>
#include <stdlib.h> //�����޸� malloc()�� ���ؼ�
//ch17-1��: ���� ������ �� ���ϱ�

int main(void)
{
    //������ ���� �Է¹ޱ�
    int num=0, sum=0;
    printf("�л��� ��: ");
    scanf("%d", &num);
    
    //�����Ҵ�
    int* arr=(int*)malloc(num*sizeof(int));

    //���� �޾Ƽ� ����
    for(int i=0; i<num; i++)
    {
        printf("���� ������ �Է��Ͻÿ�: ");
        scanf("%d", &arr[i]);
        sum = sum+arr[i]; //�հ�
    }
    printf("���� %d�Դϴ�.\n", sum); //�� ���

    free(arr);
    return 0;
}