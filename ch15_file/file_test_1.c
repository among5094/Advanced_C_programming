#include <stdio.h>
#include <stdlib.h> //malloc�� ���� �������

typedef struct membership
{
	char id[50];//����ڷ� ���� ���� ���ڿ��� ���� ������ �����Ѵ�.
	char pas[50];

}member;


int main()
{
	int num=0; //���
	member* sp; //����ü ������ ����
	FILE* fp; //���� �����͸� �����Ѵ�.
	fp = fopen("test_1.txt", "w"); //test_1.txt�� ��������� ����.
	/*
	printf("ȸ������ �� ��?: ");
	scanf("%d", &num);

	sp=(member*)malloc(num*sizeof(member*));
	*/
	fscanf(fp,"%s ", sp->id);
	
	fclose(fp); //������ �ݴ´�.
	return 0;
}

/*
fputs�� fgets�� ���Ͽ�....

1. tstory
https://blockdmask.tistory.com/404

2. ���̹� ��α�
https://blog.naver.com/PostView.nhn?blogId=tipsware&logNo=221326256836

*/

/*
printf("ȸ������ �� ��?");
	scanf("%d", &num);
    int* arr=(int*)malloc(num*sizeof(int));



*/