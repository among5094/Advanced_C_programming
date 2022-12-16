#include <stdio.h>
#include <stdlib.h> //malloc()�� ���� �������
//ch17-3��: �ּҷ� �����ϰ� ���
//������ ���� �ش� ��ũ ����ũ: https://www.happycampus.com/report-doc/16841072/ 
//����ü�� ���� ���� �ٽ� �����ϱ�: http://www.tcpschool.com/c/c_struct_intro

typedef struct address_book
{
    char name[10]; //�̸�
    char number[10]; //�޴��� ��ȣ
}ADDRESS;

/* ����ü ������ �����ϰų� ����� ������ �Ź� struct Ű���带 ����ؾߵ�.
������ typedef Ű���� ���� ����ü�� ���ο� �̸��� �����ϸ� �Ź� struct Ű���带 �����ʾƵ���*/

int main(void)
{
    
    //�ּ��� ����
    int n;
    printf("�ּ��� ����:");
    scanf("%d", &n);

    //�����Ҵ�
    ADDRESS* address; 
    address=(ADDRESS*)malloc(n*sizeof(ADDRESS));
    
    //������ �ִ��� ������ �˻��ϴ� �κ� 
    if(address==NULL)
    {
        printf("���� �޸� �Ҵ� ����\n");
        exit(1);
    }

    //�Է¹޴� �κ�
    for(int i=0; i<n; i++)
    {
        printf("�̸��� �Է��Ͻÿ�: ");
        scanf("%s", address[i].name);
        printf("�޴��� ��ȣ�� �Է��Ͻÿ�: ");
        scanf("%s", address[i].number);
    }

    printf("==============================\n");
    printf("�̸�\t�޴�����ȣ\n");
    printf("==============================\n");

    //����ϴ� �κ�
    for(int i=0; i<n; i++)
    {
        printf("%s\t%s\n",address[i].name,address[i].number);
    }

    return 0;
}