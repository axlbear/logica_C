#include <stdio.h>
#include <math.h>

int main (void)
{
    float comprimento, largura, metroQuadrado, custoCarpete, totalPagar;

    printf("Calcular custo de carpete por m²\n");
    printf("Qual é o Comprimento da sala?\n>>> ");
    scanf("%f", &comprimento);
    printf("Qual é a Largura da sala?\n>>> ");
    scanf("%f", &largura);
    printf("Qual é o valor do metro quadrado do carpete?\n>>>R$ ");
    scanf("%f", &custoCarpete);

    metroQuadrado = (comprimento * largura);

    totalPagar = (metroQuadrado * custoCarpete);

    printf("Comprimento: %.1f\nLargura: %.1f\nValor do Metro Quadradro de Carpete: R$ %.2f\nTotal a Pagar: R$ %.2f\n", comprimento, largura, custoCarpete, totalPagar);
    
    return 0;
}