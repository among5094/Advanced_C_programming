#include <stdio.h>
#include <string.h> //strcmp()�� ���� �������

struct phone_book
{
    char name[20]; //�̸�
    char home_number[20]; //����ȭ��ȣ
    char phone_number[20]; //�޴��� ��ȣ
};

int main(void)
{
    struct phone_book arr[3]; //����ü�� �迭 ����
    int i;
    for(i=0; i<3; i++)
    {
        printf("�̸��� �Է��Ͻÿ�: ");
        scanf("%s", arr[i].name);
        printf("����ȭ��ȣ�� �Է��Ͻÿ�: ");
        scanf("%s", arr[i].home_number);
        printf("�޴�����ȣ�� �Է��Ͻÿ�: ");
        scanf("%s", arr[i].phone_number);
    }

    char name[10];
    printf("�˻��� �̸��� �Է��Ͻÿ�: ");
    scanf("%s", &name);

    for(i=0; i<3; i++)
    {
        if(strcmp(name, arr[i].name)==0)
            printf("����ȭ��ȣ: %s\n�޴�����ȣ: %s\n", arr[i].home_number, arr[i].phone_number);
              
    }
    

    return 0;
}
