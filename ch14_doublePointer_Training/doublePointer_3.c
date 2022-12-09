#include <stdio.h>

//14번-포인터 활용, 2차원 배열의 열 더하기
int main(void)
{
    //이차원배열에 학생들 성적 저장하기
    int score[3][5]={
        {60,50,20,30,40},
        {10,80,90,50,36},
        {40,27,45,87,38}
    };
    int (*pst)[5]=score;// 배열 포인터 선언 시 [] <- 들어가는 값은 2차원 배열의 열 크기와 동일해야함
    
    //col은 행, row는 열
    int sum=0;
    for(int col=0; col<3; col++)
    {
        for(int row=0; row<5; row++)
            sum = sum + *(*(pst+col)+row); //*(pst+col)행 증가,  *(행 증가+row);
            
        printf("%d행의 평균값=%d\n", col, sum/5);//%lf하고 (double)sum/5하면 소수점자리까지 구할 수 있음
    }

    return 0;
}