#include <stdio.h>
#include <string.h>
#define SIZE 80
//문자열 16번 - LED전광판
int main(void)
{
    char a[SIZE]="";
    char temp;
    int i,j,count;
    j=0; count=0;
    printf("광고하고 싶은 텍스트를 입력하세요: ");
    gets(a);
    strcat(a," ");
    while(count<=100)
    {
        for(i=0;i<strlen(a);i++)
        {printf("%c", a[i]);}
        printf("\n");
        for(i=0;i<strlen(a);i++)
        {
            if(i==0)
                {temp = a[strlen(a)];
                a[strlen(a)]=a[i];
                a[i]=a[i+1];}
            else if(i==strlen(a)-1)
                a[i]=temp;
        a[i]=a[i+1];
        }
    count++;
    }
return 0;
}
