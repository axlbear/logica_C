#include "stdio.h"
#include "math.h"

int main (void)
{
    float valorHora = 19.50;
    float IR = 0.25;
    float limiteIR = 2500;
    float horaTrabalhada;
    float salario;
    float imposto;
    float salarioLiquido;

    printf("Quantas horas foram Trabalhadas?\n>>> ");
    scanf("%f", &horaTrabalhada);

    salario = (horaTrabalhada * valorHora);

    if (salario >= limiteIR){
        imposto = (salario * IR);
        salarioLiquido = salario - imposto;

        printf("Horas Trabalhadas: %.0f\nSalário Bruto: R$ %.2f\nRedução de IR: R$ %.2f\nSalário Líquido: R$ %.2f\n", horaTrabalhada, salario, imposto, salarioLiquido);
    }
    
    else {
        printf("Horas Trabalhadas: %.0f\nSalário Bruto: R$ %.2f\nRedução de IR: ISENTO\nSalário Líquido: R$ %.2f\n", horaTrabalhada, salario, salario);
    }

    return 0;
}