#include <stdio.h>
#include <stdlib.h> //동적메모리 malloc()을 위해서
//ch17-2번: 길이가 100인 n개의 문자열 구하기

int main(void)
{   
    int n=0;
    char** A=NULL; //이중포인터 초기화

    printf("문자열 개수: ");
    scanf("%d", &n);
    
    if( (A=(char**)malloc(n*sizeof(char*))) != NULL ) //동적메모리할당
    {
        for(int i=0; i<n; i++)
            A[i]=(char*)malloc(100*sizeof(char));
            //100개의 문자를 저장할 수 있는 공간 할당
            //char이기 때문에 sizeof안 써줌. char은 1byte니깐
    }
    printf("%d개의 문자열을 저장할 수 있는 공간이 할당되었습니다.\n", n);

    //문자열 입력부분
    for(int i=0; i<n ; i++)
    {   
        printf("%d번째 문자열 입력: ", i+1);
        scanf("%s", A[i]);
    }
    printf("==========\n");

    // 입력받은 문자열 출력부분
    for(int i=0; i<n ; i++)
    {
        printf("%d번째 문자열: %s\n", i+1, A[i]);
    }
    
    free(A); //동적할당 해체
    return 0;
}
