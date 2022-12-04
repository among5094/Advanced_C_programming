#include <stdio.h>
//구조체 13번 - 도형

struct shape{
    int type; //도형의 종류, 0-삼각형, 1-사각형, 2-원
    union {
        struct{ int l,h; }triangle; //삼각형의 데이터, l은 밑변 h는 높이
        struct{ int x,y; }square; //사각형의 데이터, x는 가로, y는 세로
        struct{ int radius; }circle; //원의 데이터, r은 반지름
    }data;
};

int main(void)
{

    
}
