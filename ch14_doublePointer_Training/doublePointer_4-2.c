#include <stdio.h>

//저장된 문자열을 전부 출력하는 함수 선언
void pr_str_array(char **dp, int n);

int main(void)
{
    char *arr[10] = {
        "A bad shearer never had a good sickle.",
        "A bad workman (always) blames his tools.",
        "A bad workman quarrels with his tools.",
        "A bad thing never dies.",
        "A bad workman finds fault with his tools.",
        "A bad workman always blames his tools.",
        "A bargain is a bargain.",
        "A barking dog never bites.",
        "A barking dog was never a good hunter.",
        "A bad thing never dies."
    };

    pr_str_array(arr, 10);//함수 호출

    return 0;
}

void pr_str_array(char **dp, int n)
{
    //출력부분
    for (int i=0;i<n;i++)
        printf("%s\n", dp[i]);

 }

 