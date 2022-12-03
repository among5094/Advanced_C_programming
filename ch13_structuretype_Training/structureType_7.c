#include <stdio.h>
//구조체 문제6번 - 구조체 포인터
struct point { int x, y; };

int equal(struct point *p1);

int main(void)
{
    struct point one; // one: 처음 입력받을 좌표
    struct point *p;//구조체 포인터

    p = &one;

    printf("Enter the first coordinates (x-axis, y-axis): ");
    scanf("%d %d", &one.x, &one.y);

    if(equal(&one)==1) printf("(%d, %d)의 사분면=1\n", one.x, one.y);
    else if(equal(&one)==2) printf("(%d, %d)의 사분면=2\n", one.x, one.y);
    else if(equal(&one)==3) printf("(%d, %d)의 사분면=3\n", one.x, one.y);
    else printf("(%d, %d)의 사분면=4\n", one.x, one.y);
    
}

int equal(struct point *p1)
{
    if(p1->x>0 && p1->y>0) return 1;
    else if(p1->x<0 && p1->y>0) return 2;
    else if(p1->x<0 && p1->y<0) return 3;
    else return 4;
    
}