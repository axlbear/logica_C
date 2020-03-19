#include <stdio.h>

int main (void)
{
    float altura, largura, metro_quadrado;

    printf("Qual é a Altura?\n >>> ");
    scanf("%f", &altura);

    printf("Qual é a Largura?\n>>> ");
    scanf("%f", &largura);

    metro_quadrado = (altura * largura);

    printf("%.2f m * %.2f m = %.2f m²", altura, largura, metro_quadrado);

    return 0;
}