#include <stdio.h>
#include <stdlib.h> //동적메모리 malloc()을 위해서

int main(void)
{
    int* score;
    int i;

    score =(int* )malloc(3*sizeof(int));

    if(score==NULL)
    {
        printf("동적 메모리 할당 오류\n");
        exit(1);
    }

    for(i=0;i<3;i++)
        score[i]=0;

    free(score);
    return 0;
}