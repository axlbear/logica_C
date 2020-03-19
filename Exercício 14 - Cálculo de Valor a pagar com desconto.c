#include "stdio.h"
#include "math.h"

int main (void)
{
    float folhas, valorPagar;

    printf("Quantas cópias?\n>>>");
    scanf("%f", &folhas);

    if (folhas > 100){
        valorPagar = folhas * 0.20;
        printf("Total de Folhas: %.0f\nValor das Cópias: R$ 0.25 (R$ 0.20 acima de 100 cópias)\nValor a pagar: R$ %.2f\n", folhas, valorPagar);
    }

    else {
        valorPagar = folhas * 0.25;
        printf("Total de Folhas: %.0f\nValor das Cópias: R$ 0.25 (R$ 0.20 acima de 100 cópias)\nValor a pagar: R$ %.2f\n", folhas, valorPagar);
    }

    return 0;
}