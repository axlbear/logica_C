#include <stdio.h>
#include <math.h>

int main (void)
{
    float abastecimento, km, consumo;

    printf("Calculador de Consumo Médio de Combustível:\n");
    printf("Qual o volume de combustível abastecido em Litros?\n>>> ");
    scanf("%f", &abastecimento);
    printf("Qual a marcação da Kilometragem total?\n>>> ");
    scanf("%f", &km);

    consumo = km / abastecimento;

    printf("O consumo médio de combustível é de %.1f Km/L", consumo);

    return 0;
}