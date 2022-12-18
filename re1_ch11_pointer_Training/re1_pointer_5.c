#include <stdio.h>

//conver: 학생의 학점을 100점 만점으로 "변환"하는 함수
void convert(double* grades, double* scores, int size);
//grades에는 학생의 학점이 저장되어있고, scores는 100점으로 변환한 점수가 저장되어있는 배열임.

int main(void)
{
    //배열 선언
    double grades[10]={2.2, 2.3, 2.4, 3.3, 4.3, 1.9, 3.9, 3.6, 2.2, 3.3}; //학점 저장
    double scores[10]; //100점 만점으로 환산한 배열
    convert(grades,scores,10);
}

void convert(double* grades, double* scores, int size)
{
    for(int i=0; i<10; i++)
    {
        printf("%.2lf ", *(grades+i) ); //학점 저장된 배열 보여주기
        scores[i]= (100/4.3)*grades[i]; //100점 만점으로 환산한 점수 scores에 저장
    }
    printf("\n");

    for(int i=0; i<10; i++)
        printf("%.2lf ", *(scores+i));
}