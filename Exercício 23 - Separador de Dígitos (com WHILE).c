#include "stdio.h"
#include "math.h"

int main (void)
{
    int d, r;

    printf("Qual o número?\n>>> ");
    scanf("%d", &d);

    printf("Dígitos:\n");

    while (d > 0){
        r = d % 10;
        d = d / 10;

        printf("%d\n", r);
    }

    return 0;
}