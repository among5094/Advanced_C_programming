#include <stdio.h>

//����ü ����
struct book
{
    int id; 
    char title[100]; //å ����
    char author[20]; //å�� ����

};


int main(void)
{
    struct book s; //����ü book�̶�� type�� ������ �����ϰ� �� ������ s��� �θ��ڴ�. 

    //����ü �ʱ�ȭ
    s.id=1;
    strcpy(s.title,"�̾߾ƾƾ�");
    strcpy(s.author,"���۹���");

    printf("{%d, %s, %s}", s.id, s.title, s.author);
    return 0;

}