#include <stdio.h>
#include <math.h>

int main (void)
{
    float capital, taxaJuros, meses, montante;

    printf("Qual é o Capital Inicial?\n>>>R$ ");
    scanf("%f", &capital);
    printf("Qual é Taxa de Juros?\n>>> ");
    scanf("%f", &taxaJuros);
    printf("Quantos meses?\n>>> ");
    scanf("%f", &meses);

    montante = (capital *(pow(1 + (taxaJuros / 100), meses)));

    printf("Capital Inicial: R$ %.2f\nTaxa de Juros: %.1f %%\n Meses: %.0f\nMontante: R$ %.2f", capital, taxaJuros, meses, montante);

    return 0;
}