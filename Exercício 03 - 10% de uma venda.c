#include <stdio.h>

int main (void)
{
    float venda;
    float comissao;

    printf("Qual o valor da venda?\n>>> ");
    scanf("%f", &venda);

    comissao = (venda * 0.1);

    printf("A comissao do vendedor será dê R$ %.2f da venda de R$ %.2f", comissao, venda);

    return 0;
}