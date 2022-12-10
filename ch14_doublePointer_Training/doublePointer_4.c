#include <stdio.h>
//이중 포인터 ch14장

void pr_str_array(char **dp);

int main(void)
{
    //이차원배열에 문장 저장하기
    char *arr[] = {
        "a1aaaaa",
        "bbbbbb",
        "cc",
        "ddddd",
        "eeeee5",
        "ffff6fff"
    };

    //배열 원소 개수 계산
    int num = sizeof(arr)/sizeof(arr[0]);

    for(int col=0; col<num ; col++)
    {
        printf("%s \n", *(arr+col));
    }
    


    return 0;
}

void pr_str_array(char **dp)
{


}