#include <stdio.h>
//����ü 13
struct account
{
    int number; //���¹�ȣ
    char name[20]; //�̸�
    int balance; //�ܾ�
};

int main(void)
{
    struct account s;
    
    //����ü �ʱ�ȭ
    s.number=302125051294;
    strcpy(s.name,"���۹���");
    s.balance=10520000;

    printf("{%d, %s, %d}", s.number, s.name, s.balance);
    return 0;

}