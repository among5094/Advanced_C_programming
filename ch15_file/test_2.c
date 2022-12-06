#include <stdio.h>
//12월 06일 c언어 파일입출력 실습2

int main(void)
{
    int i;
    float f;
    FILE* fp;

    fp = fopen("irr0044.txt", "r"); //fp가 가리키는 값 , !!fopen 무조건 파일을 열어줘야됨

    if(fp != NULL) //파일안에 공백이 아니라면? 즉, 파일을 열었다면?
        fscanf(fp, "%d %f", &i, &f); //

    printf("%d\n%f\n", i, f); //입력받은거 출력해주기
    fclose(fp); //파일 닫아주기
    return 0;
}