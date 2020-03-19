#include "stdio.h"
#include "math.h"

int main (void)
{
    int num, tab, i;

    do {
        printf("Tabuada:\nDigite um número entre 1 e 10:\n>>> ");
        scanf("%d", &num);
    } while (num < 1 || num > 10);

    for (i = 1; i <= 10; i++){
        tab = num * i;
        printf("%d x %d = %d\n", num, i, tab);
    }

    return 0;
}