#include <stdio.h>
#include <stdlib.h> //�����޸� malloc()�� ���ؼ�

int main(void)
{
    int* score;
    int i;

    score =(int* )malloc(3*sizeof(int));

    if(score==NULL)
    {
        printf("���� �޸� �Ҵ� ����\n");
        exit(1);
    }

    for(i=0;i<3;i++)
        score[i]=0;

    free(score);
    return 0;
}