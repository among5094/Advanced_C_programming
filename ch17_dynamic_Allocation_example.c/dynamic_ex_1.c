#include <stdio.h>
#include <stdlib.h> //동적메모리 malloc()을 위해서
//예제2 - 성적 처리 프로그램
int main(void)
{ 
    //학생 수 입력받기
    int num=0;
    printf("학생의 수: ");
    scanf("%d", &num);
    
    int* score=(int*)malloc(num*sizeof(int));
    //배열의 크기가 num의 크기만큼 할당됨
    //sizeof(자료형) : 자료형의 크기를 말함.

    //성적 받아서 저장
    for(int i=0; i<num; i++)
    {
        printf("학생 %d의 성적: ", i+1);
        scanf("%d", &score[i]);
    }
    printf("==================\n");
        
    //입력 받은 성적 출력
    for(int i=0; i<num; i++)
        printf("학생 %d의 성적: %d \n", i+1, score[i]);

    free(score); //free 안 해도 실행은 되는데 메모리를 많이 잡아먹음
    return 0;
}
