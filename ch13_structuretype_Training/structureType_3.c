#include <stdio.h>

struct email
{
    char title[20]; //����
    char sender[30]; //������
    char receiver[30]; //�߽���
    char content[100]; //����
    char date[20]; //��¥
    int pri; //�켱����
};

int main(void)
{
    struct email s;

    //����ü �ʱ�ȭ
    strcpy(s.title,"�Ⱥ� ����"); //����
    strcpy(s.sender,"among5094@gmail.com"); //������
    strcpy(s.receiver,"hsh@naver.com"); //�߽���
    strcpy(s.content,"����� ������ �÷��ּ���!"); //����
    strcpy(s.date,"2022.12.02.��"); //����
    s.pri=1;

    //���
    printf("����: %s \n", s.title);
    printf("������: %s \n", s.sender);
    printf("�߽���: %s \n", s.receiver);
    printf("����: %s \n", s.content);
    printf("��¥: %s \n", s.date);
    printf("�켱����: %d \n", s.pri);

    return 0;
}