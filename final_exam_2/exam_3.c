#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[]="My C Sample Source";

    printf("%s\n", &str[5]);
    printf("%c\n", *(str+5));

    return 0;
}