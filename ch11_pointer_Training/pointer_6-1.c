// 정수 배열 A[]를 다른 정수 배열 B[]에 복사하는 함수를 작성하고 테스트하라
#include <stdio.h>

void PrintArr(int *arr, int size);
void ArrayCopy(int *A, int *B, int size);

int main()
{
    int a[5] = {2, 2, 2, 2, 2};
    int b[5] = {0};
    PrintArr(a, 5);
    ArrayCopy(a, b, 10);

    printf("A[] = ");
    PrintArr(a, 5); // --> 값?
    printf("B[] = ");
    PrintArr(b, 5);
    return 0;
}

void PrintArr(int* arr, int size)
{
    for (int i = 0; i < 5; i++)
        printf("%d ", *(arr + i));
    printf("\n");
}

void ArrayCopy(int *A, int *B, int size)
{
    for (int i = 0; i < size; i++)
        *(B + i) = *(A + i);
}