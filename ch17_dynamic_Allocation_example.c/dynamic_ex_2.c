#include <stdio.h>
#include <stdlib.h> //malloc�� ���ؼ� 
#include <string.h>
//����ü�� ������ �� �ִ� ������ �Ҵ� �޾Ƽ� ����غ���

struct Book
{
    int number;
    char title[50];
};


int main(void)
{   
    //����ü ���� �޸�
    struct Book* p;
    p=(struct Book*)malloc(2*sizeof(struct Book));

    //�޸𸮰� ����� �Ҵ�޾Ҵ� �� �˻��ϴ� �뵵
    if(p==NULL) //����ü �迭 ù ��° ���� NULL�̸�?
    {
        print("�޸� �Ҵ� ����\n"); //�޸� �Ҵ� ����
        exit(1); 
    }
    printf("�Է�1: ");
    p[0].number=1;
    scanf("%s", p[0].title);
    p[1].number=2;
    scanf("%s", p[1].title);

    printf("���1: %s\n ���2: %s\n", p[0].title, p[1].title);

    return 0;
}