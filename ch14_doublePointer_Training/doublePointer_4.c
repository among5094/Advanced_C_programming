#include <stdio.h>
//이중 포인터 ch14장

int main(void)
{
    char *arr[] = {
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

    //배열 원소 개수 계산
    int num = sizeof(arr)/sizeof(arr[0]);

    for(int col=0; col<num ; col++)
        printf("%s \n", *(arr+col));
        
    return 0;
}
