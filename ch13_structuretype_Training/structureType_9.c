#include <stdio.h>
#include <math.h>
//문제: 하루동안 먹은 음식을 입력받아 구조체의 배열에 저장하고 하루동안 먹은 음식 칼로리 계산

//구조체 선언
struct food{
    char name[100]; //음식의 이름
    int calories; //음식의 칼로리
};

//칼로리를 전부 더하는 함수
int cal_sum(struct food array[], int size); 

int main(void)
{
    struct food food_array[3]={ 
        {"hambuger",900},
        {"pizza",1100},
        {"malatang",1100} }; // 구조체 배열 선언
    
    printf("총 칼로리=%d\n", cal_sum(food_array, 3));
    
    return 0;
}

int cal_sum(struct food array[], int size) //칼로리를 전부 더하는 함수
{   
    //struct food array[3]; 이거 없으니깐 실행됨
    int sum=0;
    for(int i=0; i<size; i++)
        sum = array[i].calories + sum;

    return sum;
   
}
