#include <stdio.h>
struct point{
    int x,y;
};

int equal(struct point p1, struct point p2);

int main(void)
{
    struct point one,two; //one: 처음 입력받을 좌표, twe: 두 번째 입력받을 좌표

    printf("첫 번재 좌표 입력:");//첫 번째 좌표의 x축, y축
    scanf("%d %d", &one.x, &one.y);
    printf("두 번째 좌표 입력");//두 번째 좌표의 x축, y축
    scanf("%d %d", &two.x, &two.y);

    if(equal(one,two)==1)//함수를 이용해서 값을 출력해주기
        printf("(%d, %d) == (%d, %d)", one.x, one.y, two.x, two.y);
    else if(equal(one,two)==0)
        printf("(%d, %d) != (%d, %d)", one.x, one.y, two.x, two.y);

    return 0;
}

int equal(struct point p1, struct point p2)
{
    if(p1.x == p2.x && p1.y==p2.y)
        return 1; //Returns 1 if two points match
    else
        return 0; //Return 0 if two points don't match

}