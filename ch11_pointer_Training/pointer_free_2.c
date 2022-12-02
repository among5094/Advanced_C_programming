#include <stdio.h>
#define ArrLen1 7
#define ArrLen2 5

//포인터 문제 11번 main함수에서만으로 
int main()
{
    int arr1[ArrLen1] = {5,3,1,6,8,9,15};
    int arr2[ArrLen2] = {4,2,7,13,11};
    int arr3[ArrLen1 + ArrLen2] ={};
   
    //arr1의 요소 보여주기
    printf("\nArr1 의 요소: ");
    for(int i = 0; i < ArrLen1; i++)
        printf("%d ",arr1[i]);
    
    //arr1 오름차순 정렬
    for (int i = 0; i < ArrLen1-1; i++)
    {
        for (int j = 0; j < ArrLen1-i-1; j++)
        {
            if (arr1[j] > arr1[j+1])
            {
                int temp = arr1[j];
                arr1[j] = arr1[j+1];
                arr1[j+1] = temp;
            }
        }
    }

    //오름차순으로 정렬된 arr1의 요소 보여주기
    printf("\n정렬된 Arr1 의 요소: ");
    for(int i = 0; i < ArrLen1; i++)
        printf("%d ",arr1[i]);
    
    //arr2의 요소 보여주기
    printf("\nArr2 의 요소: ");
    for(int i = 0;i<ArrLen2;i++)
        printf("%d ",arr2[i]);
    
    //arr2 오름차순 정렬
    for (int i = 0; i < ArrLen2-1; i++)
    {
        for (int j = 0; j < ArrLen2-i-1; j++)
        {
            if (arr2[j] > arr2[j+1])
            {
                int temp = arr2[j];
                arr2[j] = arr2[j+1];
                arr2[j+1] = temp;
            }
        }
    }

    //오름차순으로 정렬된 Arr2의 요소 보여주기
    printf("\n정렬된 Arr2 의 요소: ");
    for(int i = 0; i < ArrLen2; i++)
        printf("%d ",arr2[i]);
    
    
    int i,j,k;
    i = j = k = 0;

    //두 배열 비교해서 더 작은 값을 가진 배열을 c에 넣기
    for(i=0; i < ArrLen1 && j < ArrLen2; /*여기 왜 비어있음???*/ )

    {
        if(arr1[i] < arr2[j])
        {
            arr3[k] = arr1[i];
            k++;
            i++;
        }
        else//(arr1[i] > arr2[j])
        {
            arr3[k] = arr2[j];
            k++;
            j++;
        }
    }

    //while문 이해불가????????????????
    while(i < ArrLen1)
    {
        arr3[k] = arr1[i];
        k++;
        i++;
    }
    while(j < ArrLen2)
    {
        arr3[k] = arr2[j];
        k++;
        j++;
    }
    
    //합쳐진 배열 arr3 출력해주기
    printf("\n합쳐진 배열 요소 : ");
    for(i = 0; i < ArrLen1 + ArrLen2 ; i++)
        printf("%d ",arr3[i]);
    
    printf("\n");
    return 0;
}
 