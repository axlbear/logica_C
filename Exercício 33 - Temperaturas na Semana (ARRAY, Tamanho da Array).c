#include "stdio.h"

int main (void)
{
    int n;
    float semana[7];
    float tamanho = (sizeof(semana) / sizeof(semana[0]));

    for (n = 0; n < tamanho; n++){
        printf("Qual a temperatura registrada no %d º dia?\n>>> ", n + 1);
        scanf("%f", &semana[n]);
    }

    n = 0;

    for (n = 0; n <= tamanho; n++){
        do {
            switch (n){
                case 1 : printf("Segunda: %.1f\n", semana[0]); break;
                case 2 : printf("Terça: %.1f\n", semana[1]); break;
                case 3 : printf("Quarta: %.1f\n", semana[2]); break;
                case 4 : printf("Quinta: %.1f\n", semana[3]); break;
                case 5 : printf("Sexta: %.1f\n", semana[4]); break;
                case 6 : printf("Sábado: %.1f\n", semana[5]); break;
                case 7 : printf("Domingo: %.1f\n", semana[6]); break;
            }
        } while (! n == 7);
    }

    return 0;
}