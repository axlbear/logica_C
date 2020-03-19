#include <stdio.h>
#include <stdlib.h>

int main (void)
{
    float salario, porcentagem, reajuste, aumento;

    printf("Qual o valor do salario?\n>>> ");
    scanf("%f", &salario);

    printf("Qual a porcentagem de reajuste?\n>>> ");
    scanf("%f", &porcentagem);

    reajuste = (salario * (porcentagem / 100));

    aumento = reajuste + salario;

    printf("Salário = %.2f\nReajuste = %.2f\nAumento = %.2f", salario, reajuste, aumento);

    return 0;
}