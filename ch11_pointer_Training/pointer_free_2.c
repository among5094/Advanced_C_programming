#include <stdio.h>
#define ArrLen1 7
#define ArrLen2 5

//������ ���� 11�� main�Լ����������� 
int main()
{
    int arr1[ArrLen1] = {5,3,1,6,8,9,15};
    int arr2[ArrLen2] = {4,2,7,13,11};
    int arr3[ArrLen1 + ArrLen2] ={};
   
    //arr1�� ��� �����ֱ�
    printf("\nArr1 �� ���: ");
    for(int i = 0; i < ArrLen1; i++)
        printf("%d ",arr1[i]);
    
    //arr1 �������� ����
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

    //������������ ���ĵ� arr1�� ��� �����ֱ�
    printf("\n���ĵ� Arr1 �� ���: ");
    for(int i = 0; i < ArrLen1; i++)
        printf("%d ",arr1[i]);
    
    //arr2�� ��� �����ֱ�
    printf("\nArr2 �� ���: ");
    for(int i = 0;i<ArrLen2;i++)
        printf("%d ",arr2[i]);
    
    //arr2 �������� ����
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

    //������������ ���ĵ� Arr2�� ��� �����ֱ�
    printf("\n���ĵ� Arr2 �� ���: ");
    for(int i = 0; i < ArrLen2; i++)
        printf("%d ",arr2[i]);
    
    
    int i,j,k;
    i = j = k = 0;

    //�� �迭 ���ؼ� �� ���� ���� ���� �迭�� c�� �ֱ�
    for(i=0; i < ArrLen1 && j < ArrLen2; /*���� �� �������???*/ )

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

    //while�� ���غҰ�????????????????
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
    
    //������ �迭 arr3 ������ֱ�
    printf("\n������ �迭 ��� : ");
    for(i = 0; i < ArrLen1 + ArrLen2 ; i++)
        printf("%d ",arr3[i]);
    
    printf("\n");
    return 0;
}
 