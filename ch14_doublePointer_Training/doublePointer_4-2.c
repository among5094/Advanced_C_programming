#include <stdio.h>
/*
문제 속에 답이 있다. 문제: 문자열의 "배열을 인수로 받아서" 저장된 문자열을 전부 출력하는 함수를 작성하여 테스트하자.
이중포인터를 받으려면 포인터가 선언되어야한다.

+)참고: call by value, call by address에 대한 설명 블로그
https://ansan-survivor.tistory.com/1255
교재p. 614~615
*/

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
    for (int i=0;i<n;i++)
        printf("%s\n", dp[i]); //이 부분 설명 더 업데이트하기
        /*
        왜 그냥 dp[i]이것만 쓸까? 앞에 *는 필요없는걸까
        -> 문자열이기 때문에 안 써주는 것이고, 문자면 써주어야 한다.
        */
 }

 