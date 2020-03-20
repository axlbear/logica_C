#include "stdio.h"

int semana (int a){
    switch (a){
        case 1 : puts("Segunda"); break;
        case 2 : puts("Terça"); break;
        case 3 : puts("Quarta"); break;
        case 4 : puts("Quinta"); break;
        case 5 : puts("Sexta"); break;
        case 6 : puts("Sábado"); break;
        case 7 : puts("Domingo"); break;
        default :puts("Opção Inválida"); break;
    }
}


int main (void)
{
    int x;

    puts("X = ?\n(1 - 7)");
    scanf("%d", &x);

    semana(x);

    return 0;
}