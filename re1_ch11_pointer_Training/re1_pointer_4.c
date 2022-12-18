#include <stdio.h>

void arr_print(int* A, int size);

int main(void)
{
    int array[]={1,2,6,3,6,2};
    int size=sizeof(array)/sizeof(array[0]); //배열의 크기
    arr_print(array,size);
    return 0;
}

void arr_print(int* A, int size)
{
    printf("A[] = { ");
    for(int i=0; i<size;i++)
        printf("%d ", *(A+i)); //A[i]도 됨!
    printf(" }\n");
    
}

/*피드백:
1. 이전의 풀이는 size를 미리 적었는데 지금은 size를 sizeof를 이용해서 직접 구했다.
int size=sizeof(array)/sizeof(array[0]); //배열의 크기
*/