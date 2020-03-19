#include <stdio.h>

int main (void)
{
    float dollar = 4.86;
    float real, cota;

    printf("Qual o valor em Real?\n>>>R$  ");
    scanf("%f", &real);

    cota = real / dollar;

    printf("R$ %.2f = US$ %.2f ", real, cota);

    return 0;
}