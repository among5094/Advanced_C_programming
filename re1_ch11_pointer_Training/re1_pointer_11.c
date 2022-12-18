#include <stdio.h>

void merge(int* A, int* B, int* C, int size); //더 작은 것을 비교하는 함수

int main(void)
{
    int A[]={2,5,7,8};
    int B[]={1,3,4,6};
    int C[8]={0};
    merge(A,B,C,8);

    // Merge 함수 수행 후 정렬된 배열 C 출력하기
    printf("C[]={ ");
    for (int i = 0;i <8; i++)
        printf("%d ", C[i]);
    printf("}");

    return 0;
}

void merge(int* A, int* B, int* C, int size)
{
    //배열 A보여주기
    printf("A[]= {");
    for(int i=0; i<size/2 ; i++)
        printf("%d ", A[i]);
    printf("}");

    //배열 B보여주기
    printf("B[]= {");
    for(int i=0; i<size/2 ; i++)
        printf("%d ", B[i]);
    printf("}");

    //---------더 작은 배열이 있는 부분을 배열c로 옮기는 부분-----
    int A_index= 0, B_index = 0, C_index = 0; //각각 해당 배열의 인덱스를 의미함
   
    while (C_index != size) // c가 배열 C의 마지막 인덱스를 나타낼 때 까지 반복
    {
        if (A[A_index] < B[B_index])//만약 A가 더 작으면?
            C[C_index++] = A[A_index++]; // 해당 원소를 C 배열에 넣고, A와 C의 인덱스는 증가시킨다
        else if (A[A_index] > B[B_index]) // 만약 B가 더 작으면?
            C[C_index++] = B[B_index++]; // 해당 원소를 C 배열에 넣는다, 배열 인덱스를 각각 증가시킨다

        //---------먼저 끝나는 배열이 있는 경우의 처리 부분-----
        
        //A배열이 먼저 끝났다면?
        if (A_index == size/2) //A_index는 4이고, size가 8인데 2나누면 4임. 즉 4를 의미함
        { 
            while (B_index != size/2) //B 배열이 끝나기 전까지
                C[C_index++] = B[B_index++]; // B 배열에 남은 요소들을 C 배열에 넣고, 배열 인덱스를 각각 증가시킨다
        }
        //B 배열이 먼저 끝났다면?
        else if (B_index == size/2)
        {
            while (A_index != size/2) // A 배열이 끝나기 전까지
                C[C_index++] = A[A_index++]; // A 배열에 남은 요소들을 C 배열에 넣고, 배열 인덱스를 각각 증가시킨다
        }
    }

}
// A 배열이 먼저 끝났다면? (3번 인덱스까지 C에 넣고 a++을 수행하므로 a는 size/2가 됨)