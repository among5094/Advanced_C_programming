#include <stdio.h>
#include <stdlib.h> //malloc()을 위한 헤더파일
//ch17-3번: 주소록 저장하고 출력
//문제애 대한 해답 링크 참고링크: https://www.happycampus.com/report-doc/16841072/ 
//구조체에 대한 정의 다시 복습하기: http://www.tcpschool.com/c/c_struct_intro

typedef struct address_book
{
    char name[10]; //이름
    char number[10]; //휴대폰 번호
}ADDRESS;

/* 구조체 변수를 선언하거나 사용할 때에는 매번 struct 키워드를 사용해야됨.
하지만 typedef 키워드 쓰면 구조체에 새로운 이름을 선언하면 매번 struct 키워드를 쓰지않아도됨*/

int main(void)
{
    
    //주소의 개수
    int n;
    printf("주소의 개수:");
    scanf("%d", &n);

    //동적할당
    ADDRESS* address; 
    address=(ADDRESS*)malloc(n*sizeof(ADDRESS));
    
    //오류가 있는지 없는지 검사하는 부분 
    if(address==NULL)
    {
        printf("동적 메모리 할당 오류\n");
        exit(1);
    }

    //입력받는 부분
    for(int i=0; i<n; i++)
    {
        printf("이름을 입력하시오: ");
        scanf("%s", address[i].name);
        printf("휴대폰 번호를 입력하시오: ");
        scanf("%s", address[i].number);
    }

    printf("==============================\n");
    printf("이름\t휴대폰번호\n");
    printf("==============================\n");

    //출력하는 부분
    for(int i=0; i<n; i++)
    {
        printf("%s\t%s\n",address[i].name,address[i].number);
    }

    return 0;
}