#include <stdio.h>
#include <stdlib.h> //�����޸� malloc()�� ���ؼ�
//ch17-2��: ���̰� 100�� n���� ���ڿ� ���ϱ�

int main(void)
{   
    int n=0;
    char** A=NULL; //���������� �ʱ�ȭ

    printf("���ڿ� ����: ");
    scanf("%d", &n);
    
    if( (A=(char**)malloc(n*sizeof(char*))) != NULL ) //�����޸��Ҵ�
    {
        for(int i=0; i<n; i++)
            A[i]=(char*)malloc(100*sizeof(char));
            //100���� ���ڸ� ������ �� �ִ� ���� �Ҵ�
            //char�̱� ������ sizeof�� ����. char�� 1byte�ϱ�
    }
    printf("%d���� ���ڿ��� ������ �� �ִ� ������ �Ҵ�Ǿ����ϴ�.\n", n);

    //���ڿ� �Էºκ�
    for(int i=0; i<n ; i++)
    {   
        printf("%d��° ���ڿ� �Է�: ", i+1);
        scanf("%s", A[i]);
    }
    printf("==========\n");

    // �Է¹��� ���ڿ� ��ºκ�
    for(int i=0; i<n ; i++)
    {
        printf("%d��° ���ڿ�: %s\n", i+1, A[i]);
    }
    
    free(A); //�����Ҵ� ��ü
    return 0;
}
