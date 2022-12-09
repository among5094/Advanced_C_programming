#include <stdio.h>
#include <string.h>
// 14장 - 이중포인터  2번: 

int get_sum(int array);

int main(void)
{
    int arr[3][5]={
        {10,20,30,40,50},
        {1,2,3,4,5},
        {11,22,33,44,55}
    };

    int sum=0;
    
    for(int col=0 ; col<3 ; col++) //행증가
    {    
        for(int row=0; row<5; row++)//열증가
        {
            sum=sum+arr[col][row];
        } 
    }
    
    printf("합계: %d\n", sum);

    return 0;
}

int get_sum(int array);
