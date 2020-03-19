#include "stdio.h"

int main (void)
{
    int linha, coluna, x;

    printf("X = ?\n>>> ");
    scanf("%d", &x);

    for (linha = 1; linha <= x; linha++){
        printf("\n");
        for (coluna = 1; coluna <= x; coluna++){
            printf("#");
        }
    }
    return 0;
}