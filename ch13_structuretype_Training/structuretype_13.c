#include <stdio.h>
//����ü 13�� - ����

struct shape{
    int type; //������ ����, 0-�ﰢ��, 1-�簢��, 2-��
    union {
        struct{ int l,h; }triangle; //�ﰢ���� ������, l�� �غ� h�� ����
        struct{ int x,y; }square; //�簢���� ������, x�� ����, y�� ����
        struct{ int radius; }circle; //���� ������, r�� ������
    }data;
};

int main(void)
{

    
}
