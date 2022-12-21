#include <stdio.h>

int main() {
    int i = 80;
    int* p = &i;
    int** dp = &p;
    **dp = 90;
    
    printf("%d %d %d", i, *p, **dp);

    printf("\n");

    *p = 100;
    printf("%d %d %d", i, *p, **dp);

    return 0;

}