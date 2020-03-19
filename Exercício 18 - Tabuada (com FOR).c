#include "stdio.h"

int main (void)
{
    int x, tabuada, i;

    printf("X = ?\n>>> ");
    scanf("%d", &x);

    for (i=0; i <= 10; i++){
        tabuada = x * i;
        printf("%d x %d = %d\n", x, i, tabuada);
    }

    return 0;
}