#include <stdio.h>
#include <ctype.h>
#include <string.h>

//����ü ����
typedef struct membership
{
	char name[100];
	int age;
	char join_id[100];
	char join_pas[100];

}member;

int main(void)
{
    join_membership();
    return 0;
}

int join_membersihp() //����7 ȸ�������� ���� �Լ�
{	
	int num; //������ ����� ��
	member* p; //����ü
	FILE* fp=NULL; //���� ����� ����� ��
	fp=fopen("customer_Information.txt","r");

	while(1)
	{
		printf("�л��� ��: "); //�Է� ���� ȸ�� ��
		scanf("%d", &num);

		if(num>5)
			printf("5���� �ʰ��� �ο��� �Է��� �� �����ϴ�.\n");
		else
			break;
		
	}
	
    int* arr=(int*)malloc(num*sizeof(int));//�����Ҵ�
	
	//������ ����� ������ �������� Ȯ���ϴ� �κ�
	if(fp==NULL)
		printf("���� ���� ����\n");
	else
		printf("���� ���� ����\n");

	//ȸ�� ���� �Է� �ޱ�
	for (int i = 0; i < num; i++)
	{
		printf("�̸��� ���� id�� pas�� �Է��ϼ���: \n");
		scanf("%s %d %s %s", (p+i)->name, &(p+i)->age, (p+i)->join_id, (p+i)->join_pas );
	}

	//ȸ�� ������ ����(r���)
    for (int i = 0; i < num; i++)
	{
        fscanf(fp, "%s %d %s %s", (p+i)->name, &(p+i)->age, (p+i)->join_id, (p+i)->join_pas );
	}
	fputs("end", fp); //�����ٴ� ǥ��

	fclose(fp); //���� ����
	return 0;

}
