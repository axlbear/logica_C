#include "stdio.h"

int main (void)
{
    int x, i;

    puts("Quantidade de itens na lista:");
    scanf("%d", &x);

    int list[x];

    for (i = 0; i < x; i++){
        printf("Item %d da lista:\n::> ", i + 1);
        scanf("%d", &list[i]);
    }

    for (i = x - 1; i >= 0; i--){
        printf("%d - %d\n", i, list[i]);
    }

    return 0;
}