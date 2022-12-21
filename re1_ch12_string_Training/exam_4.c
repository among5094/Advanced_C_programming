#include <stdio.h>

struct student{//구조체 변수 정의

    int number; //학번
    char name[20]; //이름
    double grade; //학점
};

int main(void)
{
    //구조체 포인터
    struct student* p;
    
    //학생수 입력받는 부분
    int num=0;
    printf("학생의 수: ");
    scanf("%d", &num);
    p=(struct student*)malloc(num* sizeof(struct student));

    //메모리 할당 오류나면 알려주는 부분
    if (p == NULL)
    {
        printf("메모리 할당 오류");
        exit(1);
    }

    for(int i=0; i<num; i++) //입력받은 학생수 만큼 for문 실행
    {
        printf("학번을 입력하시오: "); //학번은 int형
        scanf("%d",  &(p + i)->number);
        printf("이름을 입력하시오: "); //이름은 char형
        scanf("%s", &(p + i)->name);
        printf("학점을 입력하시오(실수): "); //학점은 double형
        scanf("%lf", &(p + i)->grade );
    }
    
    //학번,이름,학점 출력부분
    for(int i=0; i<num; i++) 
    {
        printf("학번: %d, 이름: %s, 학점: %.2lf\n", (p + i)->number, (p + i)->name, (p + i)->grade );
        printf("\n");
    } 

    //최대값 출력 부분
    int max = (p + 0)->grade; //최대값 초기화
    int n = 0;

    for (int i = 1; i < num ; i++)
    {
        if (max < (p + i)->grade )
        {
            max = (p + i)->grade; //더 큰 값을 max에 넣어주기
            n = i; //index증가
        }

    }

    printf("학점이 가장 높은 학생은 (학번:%d, 이름: %s, 학점: %lf)입니다.", (p + n)->number, (p + n)->name, (p + n)->grade);

    
    return 0;
}