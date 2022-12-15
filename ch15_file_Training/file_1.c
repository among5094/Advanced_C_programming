#include <stdio.h> //FILE는 stdio.h에 정의되어있다.
/*
파일을 다룰 때 꼭 지켜야 하는 3가지
1. 파일 열기
2. 파일 읽기와 쓰기
3. 파일 닫기
*/

int main(void)
{
    FILE* fp1; //파일포인터(file pointer) 선언
    FILE* fp2;

    fp1 = fopen("file_1-1.txt", "r"); //fopen("파일이름", "파일을 여는 모드를 의미");
    fp2 = fopen("file_1-2.txt", "r");
    
    //파일을 제대로 열었는지 아닌지 검사해주는 부분

    //fp1검사
    if(fp1==NULL)
        printf("file_1-1.txt 파일 열기 실패\n");
    else
        printf("file_1-1.txt 파일 열기 성공\n");

    //fp2검사
    if(fp2==NULL)
        printf("file_1-2.txt 파일 열기 실패\n");
    else
        printf("file_1-2.txt 파일 열기 성공\n");

    while(1)
    {
        if(fgetc(fp1) != fgetc(fp2))
        {
            printf("두 파일은 서로 다릅니다.\n");
            break;
        }
        else if( (feof(fp1)==0 && feof(fp2)) !=0 || (feof(fp1) != 0 && feof(fp2)==0))
        {
            printf("두 파일은 서로 다릅니다.");
            break;
        }
        else if( feof(fp1) != 0 && feof(fp2) != 0)
        {
            printf("두 파일은 서로 같습니다.");
            break;
        }

    }    

    fclose(fp1); //파일 닫아주기
    fclose(fp2);

    return 0;

}