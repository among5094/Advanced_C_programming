#include <stdio.h>
#include <string.h>
// 14장 - 이중포인터  2번: 

int get_sum(int array[], int size);

int main(void)
{
    //이차원배열에 덧셈 저장하기
    int arr[3][5] = {{10,20,30,40,50}, //150
                     {1,2,3,4,5}, //15
                     {11,22,33,44,55}}; //165

    int (*pst)[5]=arr; // 배열 포인터 선언 시 [] <- 들어가는 값은 2차원 배열의 열 크기와 동일해야함
    
    // 한 행의 합 먼저 구하기
    int sum=0;
    for(int k=0;k<3;k++)
    {
        for(int i=0; i<5;i++) // 여기서 i는 2차원 배열의 열 인덱스
            sum = sum + *(*(pst+k)+i); // *(pst) --> 행, *((행)+i) --> 열
    }
    printf("합계: %d\n", sum);
    
    return 0;
}
