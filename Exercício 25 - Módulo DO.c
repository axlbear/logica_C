#include "stdio.h"
#include "math.h"

int main (void)
{
    float n, r;

    do {
        printf("Digite um número positivo:\n>>> ");
        scanf("%f", &n);

    } while (n < 0);

    r = sqrt(n);

    printf("A Raiz quadrada de %.1f é %.1f", n, r);

    return 0;
}