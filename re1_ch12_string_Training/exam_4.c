#include <stdio.h>

struct student{//����ü ���� ����

    int number; //�й�
    char name[20]; //�̸�
    double grade; //����
};

int main(void)
{
    //����ü ������
    struct student* p;
    
    //�л��� �Է¹޴� �κ�
    int num=0;
    printf("�л��� ��: ");
    scanf("%d", &num);
    p=(struct student*)malloc(num* sizeof(struct student));

    //�޸� �Ҵ� �������� �˷��ִ� �κ�
    if (p == NULL)
    {
        printf("�޸� �Ҵ� ����");
        exit(1);
    }

    for(int i=0; i<num; i++) //�Է¹��� �л��� ��ŭ for�� ����
    {
        printf("�й��� �Է��Ͻÿ�: "); //�й��� int��
        scanf("%d",  &(p + i)->number);
        printf("�̸��� �Է��Ͻÿ�: "); //�̸��� char��
        scanf("%s", &(p + i)->name);
        printf("������ �Է��Ͻÿ�(�Ǽ�): "); //������ double��
        scanf("%lf", &(p + i)->grade );
    }
    
    //�й�,�̸�,���� ��ºκ�
    for(int i=0; i<num; i++) 
    {
        printf("�й�: %d, �̸�: %s, ����: %.2lf\n", (p + i)->number, (p + i)->name, (p + i)->grade );
        printf("\n");
    } 

    //�ִ밪 ��� �κ�
    int max = (p + 0)->grade; //�ִ밪 �ʱ�ȭ
    int n = 0;

    for (int i = 1; i < num ; i++)
    {
        if (max < (p + i)->grade )
        {
            max = (p + i)->grade; //�� ū ���� max�� �־��ֱ�
            n = i; //index����
        }

    }

    printf("������ ���� ���� �л��� (�й�:%d, �̸�: %s, ����: %lf)�Դϴ�.", (p + n)->number, (p + n)->name, (p + n)->grade);

    
    return 0;
}