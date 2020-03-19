#include "stdio.h"
#include "math.h"
#include "ctype.h"

int main (void)
{
    int placa;

    printf("Qual o número da placa?\n>>> ");
    scanf("%d", &placa);

    placa = placa % 10;

    switch(placa) {
        case 1 : case 2 : printf("Seu rodízio será na Segunda."); break;
        case 3 : case 4 : printf("Seu rodízio será na Terça."); break;
        case 5 : case 6 : printf("Seu rodízio será na Quarta."); break;
        case 7 : case 8 : printf("Seu rodízio será na Quinta."); break;
        case 9 : case 0 : printf("Seu rodízio será na Sexta."); break;
    }
}