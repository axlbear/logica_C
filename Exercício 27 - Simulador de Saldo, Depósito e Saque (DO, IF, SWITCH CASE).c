#include "stdio.h"
#include "ctype.h"

int main (void)
{
    float saldo = 1000, valor;
    int op;

    do {
        printf("1- Deposito\n2- Saldo\n3- Saque\n4- Sair\nOpção:\n>>>> ");
        scanf("%d", &op);

        switch (op){
            case 1 : printf("Valor:\nR$ "); scanf("%f", &valor);if ( valor > 0 ) saldo += valor; else puts("Opção Inválida!"); break;
            case 2 : printf("Saldo:\nR$ %.2f\n", saldo); break;
            case 3 : printf("Valor:\nR$ "); scanf("%f", &valor);if ( valor > 0 && saldo > 0) saldo -= valor; else puts("Opção Inválida!"); break;
            default : if ( op != 4 ) printf("Opção Inválida.\nR$ "); break;
        }
    } while (op != 4);

    return 0;
}