#include "stdio.h"

int main (void)
{
    int x, i;

    puts("Qual é o tamanho da lista:");
    scanf("%d", &x);

    int lista[x];

    for (i = 0; i < x; i++){
        printf("Item %d da lista:\n", i);
        scanf("%d", &lista[i]);
    }

    for (i = 0; i <= x - 1; i++){
        printf("%d - %d\n", i, lista[i]);
    }

    return 0;
}