#include "stdio.h"

int main (void)
{
    float capitalInvestido, jurosMensal, rendimento;
    int i, meses;

    printf("Qual o valor investido por mês?\n>>> R$ ");
    scanf("%f", &capitalInvestido);

    printf("Juros ao mês?\n>>> ");
    scanf("%f", &jurosMensal);

    jurosMensal /= 100;

    printf("Quantos meses?\n>>> ");
    scanf("%d", &meses);

    for (i = 1; i <= meses; i++){
        rendimento += capitalInvestido;
        rendimento += (rendimento * jurosMensal);
        printf("Mês %d - R$ %.2f\n", i, rendimento);
    }

    return 0;
}