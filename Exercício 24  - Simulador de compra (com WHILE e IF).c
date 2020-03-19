#include "stdio.h"
#include "stdlib.h"
#include "stdbool.h"

int main (void)
{
    float valor, total;
    int quantidade;

    total = 0;

    while (true){
        printf("Total = R$ %.2f\n", total);
        printf("Valor?\n>>> R$ ");
        scanf("%f", &valor);
        printf("Quantidade?\n>>> ");
        scanf("%d", &quantidade);

        if (valor <= 0){
            printf("Total à pagar: R$ %.2f", total);
            break;
        }

        else {
            valor *= quantidade;
            total += valor;
        }
    }

    return 0;
}