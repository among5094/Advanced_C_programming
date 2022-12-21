#include <stdio.h>
//12월 06일 c언어 파일 실습1
int main(void)
{
    int i=23;
    float f=1.2345;
    FILE* fp;
    
    fp = fopen("irr0044.txt", "w"); //파일 읽을게, r은 쓰기모드

    if(fp != NULL) //파일을 열었다면?
        fprintf(fp, "%10d %16.3f", i, f);

    fclose(fp); //파일 닫아주기

    return 0;

}