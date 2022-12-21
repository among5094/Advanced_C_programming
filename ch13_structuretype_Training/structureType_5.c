#include <stdio.h>
struct point{
    int x,y;
};

int equal(struct point p1, struct point p2);

int main(void)
{
    struct point one,two; //one: ó�� �Է¹��� ��ǥ, twe: �� ��° �Է¹��� ��ǥ

    printf("ù ���� ��ǥ �Է�:");//ù ��° ��ǥ�� x��, y��
    scanf("%d %d", &one.x, &one.y);
    printf("�� ��° ��ǥ �Է�");//�� ��° ��ǥ�� x��, y��
    scanf("%d %d", &two.x, &two.y);

    if(equal(one,two)==1)//�Լ��� �̿��ؼ� ���� ������ֱ�
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