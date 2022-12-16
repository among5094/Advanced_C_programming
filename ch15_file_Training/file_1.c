#include <stdio.h> //FILE는 stdio.h에 정의되어있다.
#include <stdlib.h>

/*
파일을 다룰 때 꼭 지켜야 하는 3가지
1. 파일 열기
2. 파일 읽기와 쓰기
3. 파일 닫기
*/

int main(void)
{
    FILE* fp1;
    FILE* fp2; //파일포인터(file pointer) 선언
    char file1[100], file2[100];

    printf("첫 번째 파일 이름: ");
    scanf("%s", file1);
    printf("두 번째 파일 이름: ");
    scanf("%s", file2);

    //첫 번째 파일 읽기 모드로 열기
    if((fp1 = fopen(file1, "r")) == NULL)
    {
        fprintf(stderr, "원본 파일 %s를 열 수 없다. \n", file1);
        exit(1); //에러시 강제 종료

    }

    //두 번째 파일 읽기 모드로 열기
    if((fp2 = fopen(file2, "r")) == NULL)
    {
        fprintf(stderr, "원본 파일 %s를 열 수 없다. \n", file2);
        exit(1); //에러시 강제 종료
    }

    //첫 번째 파일과 두 번째 파일 비교
    while(1)
    {

        int c1=fgetc(fp1);
        int c2=fgetc(fp2);

        if( c1 == EOF || c2 == EOF )
            break;

        if(c1 != c2)
        {
            printf("두 파일은 서로 다릅니다.\n");
            return 0;
        }

    }    

        printf("두 파일은 서로 같습니다.\n");
        fclose(fp1); //파일 닫아주기
        fclose(fp2);
        return 0;
}