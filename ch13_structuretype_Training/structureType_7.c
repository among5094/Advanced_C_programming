#include <stdio.h>
//����ü ����6�� - ����ü ������
struct point { int x, y; };

int equal(struct point *p1);

int main(void)
{
    struct point one; // one: ó�� �Է¹��� ��ǥ
    struct point *p;//����ü ������

    p = &one;

    printf("Enter the first coordinates (x-axis, y-axis): ");
    scanf("%d %d", &one.x, &one.y);

    if(equal(&one)==1) printf("(%d, %d)�� ��и�=1\n", one.x, one.y);
    else if(equal(&one)==2) printf("(%d, %d)�� ��и�=2\n", one.x, one.y);
    else if(equal(&one)==3) printf("(%d, %d)�� ��и�=3\n", one.x, one.y);
    else printf("(%d, %d)�� ��и�=4\n", one.x, one.y);
    
}

int equal(struct point *p1)
{
    if(p1->x>0 && p1->y>0) return 1;
    else if(p1->x<0 && p1->y>0) return 2;
    else if(p1->x<0 && p1->y<0) return 3;
    else return 4;
    
}