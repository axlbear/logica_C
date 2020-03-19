#include <stdio.h>

int main (void)
{
    float valor, porcentagem, desconto, valor_final;

    printf("Qual é o valor da compra?\n>>> ");
    scanf("%f", &valor);

    printf("Quantos porcento de desconto?\n>>> ");
    scanf("%f", &porcentagem);

    desconto = (valor * (porcentagem / 100));

    valor_final = (valor - desconto);

    printf("Valor da Compra = %.2f\nDesconto = %.2f\nValor a pagar = %.2f", valor, desconto, valor_final);

    return 0;
}