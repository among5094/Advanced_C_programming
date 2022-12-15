#include <stdio.h> //FILE�� stdio.h�� ���ǵǾ��ִ�.
/*
������ �ٷ� �� �� ���Ѿ� �ϴ� 3����
1. ���� ����
2. ���� �б�� ����
3. ���� �ݱ�
*/

int main(void)
{
    FILE* fp1; //����������(file pointer) ����
    FILE* fp2;

    fp1 = fopen("file_1-1.txt", "r"); //fopen("�����̸�", "������ ���� ��带 �ǹ�");
    fp2 = fopen("file_1-2.txt", "r");
    
    //������ ����� �������� �ƴ��� �˻����ִ� �κ�

    //fp1�˻�
    if(fp1==NULL)
        printf("file_1-1.txt ���� ���� ����\n");
    else
        printf("file_1-1.txt ���� ���� ����\n");

    //fp2�˻�
    if(fp2==NULL)
        printf("file_1-2.txt ���� ���� ����\n");
    else
        printf("file_1-2.txt ���� ���� ����\n");

    while(1)
    {
        if(fgetc(fp1) != fgetc(fp2))
        {
            printf("�� ������ ���� �ٸ��ϴ�.\n");
            break;
        }
        else if( (feof(fp1)==0 && feof(fp2)) !=0 || (feof(fp1) != 0 && feof(fp2)==0))
        {
            printf("�� ������ ���� �ٸ��ϴ�.");
            break;
        }
        else if( feof(fp1) != 0 && feof(fp2) != 0)
        {
            printf("�� ������ ���� �����ϴ�.");
            break;
        }

    }    

    fclose(fp1); //���� �ݾ��ֱ�
    fclose(fp2);

    return 0;

}