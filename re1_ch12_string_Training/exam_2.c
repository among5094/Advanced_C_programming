#include <stdio.h>
struct point
{
    int x,y;
};

int equal(struct point* p1, struct point* p2);

int main(void)
{
    struct point p1={1,2};
    struct point p2={3,5};
    printf("일치 여부=%d\n", equal(&p1, &p2));
    return 0;
}

int equal(struct point* p1, struct point* p2)
{
    if(p1->x == p2->x && p1->y == p2->y)
        return 1;
    else
        return 0;

    //틀린이유: p1.x라고 구조체 멤버 참조를 했음
    //p1->x 구조체 포인터 써야됨. 

}