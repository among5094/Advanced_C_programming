#include <stdio.h> //FILE�� stdio.h�� ���ǵǾ��ִ�.
#include <stdlib.h>

/*
������ �ٷ� �� �� ���Ѿ� �ϴ� 3����
1. ���� ����
2. ���� �б�� ����
3. ���� �ݱ�
*/

int main(void)
{
    FILE* fp1;
    FILE* fp2; //����������(file pointer) ����
    char file1[100], file2[100];

    printf("ù ��° ���� �̸�: ");
    scanf("%s", file1);
    printf("�� ��° ���� �̸�: ");
    scanf("%s", file2);

    //ù ��° ���� �б� ���� ����
    if((fp1 = fopen(file1, "r")) == NULL)
    {
        fprintf(stderr, "���� ���� %s�� �� �� ����. \n", file1);
        exit(1); //������ ���� ����

    }

    //�� ��° ���� �б� ���� ����
    if((fp2 = fopen(file2, "r")) == NULL)
    {
        fprintf(stderr, "���� ���� %s�� �� �� ����. \n", file2);
        exit(1); //������ ���� ����
    }

    //ù ��° ���ϰ� �� ��° ���� ��
    while(1)
    {

        int c1=fgetc(fp1);
        int c2=fgetc(fp2);

        if( c1 == EOF || c2 == EOF )
            break;

        if(c1 != c2)
        {
            printf("�� ������ ���� �ٸ��ϴ�.\n");
            return 0;
        }

    }    

        printf("�� ������ ���� �����ϴ�.\n");
        fclose(fp1); //���� �ݾ��ֱ�
        fclose(fp2);
        return 0;
}