#include "stdio.h"
#include "math.h"

int main (void)
{
    float pecas, defeito, manutencao;

    printf("Quantas peças foram produzidas?\n>>> ");
    scanf("%f", &pecas);

    printf("Quantas peças foram danificadas?\n>>> ");
    scanf("%f", &defeito);

    manutencao = pecas * 0.10;

    if (defeito >= manutencao){
        printf("A máquina precisa de manutenção.");
    }

    else {
        printf("A máquina não precisa de manutenção.");
    }

    return 0;    
}