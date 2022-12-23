#include <stdio.h>
#include <ctype.h>
#include <string.h>

//구조체 선언
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

int join_membersihp() //조건7 회원가입을 위한 함수
{	
	int num; //예약할 사람의 수
	member* p; //구조체
	FILE* fp=NULL; //파일 입출력 배웠을 때
	fp=fopen("customer_Information.txt","r");

	while(1)
	{
		printf("학생의 수: "); //입력 받을 회원 수
		scanf("%d", &num);

		if(num>5)
			printf("5명을 초과한 인원은 입력할 수 없습니다.\n");
		else
			break;
		
	}
	
    int* arr=(int*)malloc(num*sizeof(int));//동적할당
	
	//파일이 제대로 열리고 닫혔는지 확인하는 부분
	if(fp==NULL)
		printf("파일 열기 실패\n");
	else
		printf("파일 열기 성공\n");

	//회원 정보 입력 받기
	for (int i = 0; i < num; i++)
	{
		printf("이름과 나이 id와 pas를 입력하세요: \n");
		scanf("%s %d %s %s", (p+i)->name, &(p+i)->age, (p+i)->join_id, (p+i)->join_pas );
	}

	//회원 정보를 저장(r모드)
    for (int i = 0; i < num; i++)
	{
        fscanf(fp, "%s %d %s %s", (p+i)->name, &(p+i)->age, (p+i)->join_id, (p+i)->join_pas );
	}
	fputs("end", fp); //끝났다는 표시

	fclose(fp); //파일 제출
	return 0;

}
