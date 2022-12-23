#include <stdio.h>
#include <stdlib.h> //malloc을 위한 헤더파일

typedef struct membership
{
	char id[50];//사용자로 부터 받을 문자열를 담을 변수를 선언한다.
	char pas[50];

}member;


int main()
{
	int num=0; //몇명
	member* sp; //구조체 포인터 선언
	FILE* fp; //파일 포인터를 선언한다.
	fp = fopen("test_1.txt", "w"); //test_1.txt를 쓰기용으로 연다.
	/*
	printf("회원가입 몇 명?: ");
	scanf("%d", &num);

	sp=(member*)malloc(num*sizeof(member*));
	*/
	fscanf(fp,"%s ", sp->id);
	
	fclose(fp); //파일을 닫는다.
	return 0;
}

/*
fputs와 fgets에 대하여....

1. tstory
https://blockdmask.tistory.com/404

2. 네이버 블로그
https://blog.naver.com/PostView.nhn?blogId=tipsware&logNo=221326256836

*/

/*
printf("회원가입 몇 명?");
	scanf("%d", &num);
    int* arr=(int*)malloc(num*sizeof(int));



*/