#include <stdio.h>

void arraycopy(int *from, int *to, int size);
void arrayprint(int *p, int size);

int main(void)
{
    int to[] = {13, 34, 28, 56, 73, 45};
    int from[] = {3, 5, 1, 6, 7};
    arraycopy(from, to, 5);
    arrayprint(from, 5);
    arrayprint(to, 6);
    return 0;
}

//배열 from의 처음 원소부터 size개수까지 원소 값을 배열to의 동일한 순서의 원소에 복사하는 함수
void arraycopy(int *from, int *to, int size)
{
    for(int i=0; i<size ; i++)
        *(to+i)=*(from+i);
}
//배열p를 출력하는 부분
void arrayprint(int *p, int size)
{
    printf("\n");
    for(int i=0; i<size; i++)
        printf("%d ", *(p+i));

}