#include "stdio.h"

void ordenar_cre(int a[], int i){
    int x, y;

    for (x = 1; x < i; x++){
        for (y = 0; y < i - 1; y++){
            if (a[y] > a[y + 1]){
                int z = a[y];
                a[y] = a[y + 1];
                a[y + 1] = z;
                printf("x (contador) = %d - %x, y (ordenador) = %d - %x\na[y] = %d - %x | a[y + 1] = %d - %x | z = %d - %x\n", x, &x, y, &y, a[y], &a[y], a[y + 1], &a[y + 1], z, &z);
            }
        }
    }
}

void ordenar_dec(int a[], int i){
    int x, y;

    for (x = 1; x < i; x++){
        for (y = 0; y < i - 1; y++){
            if (a[y] < a[y + 1]){
                int z = a[y];
                a[y] = a[y + 1];
                a[y + 1] = z;
                printf("x (contador) = %d - %x, y (ordenador) = %d - %x\na[y] = %d - %x | a[y + 1] = %d - %x | z = %d - %x\n", x, &x, y, &y, a[y], &a[y], a[y + 1], &a[y + 1], z, &z);
            }
        }
    }
}

int main (void)
{
    int vetor[] = {46, 50, 38, 19, 27};
    int tamanho = sizeof(vetor) / sizeof(vetor[0]);
    int x;

    for (x = 0; x < tamanho; x++){
        printf("x = %d - %x | - Vetor[%d] = %d - %x\n", x, &x, x, vetor[x], &vetor[x]);
    }

    puts("||||||||");       

    ordenar_cre(vetor, tamanho);

    puts("||||||||");

    for (x = 0; x < tamanho; x++){
        printf("x = %d - %x | - Vetor[%d] = %d - %x\n", x, &x, x, vetor[x], &vetor[x]);
    }

    puts("||||||||");

    ordenar_dec(vetor, tamanho);

    puts("||||||||");

    for (x = 0; x < tamanho; x++){
        printf("x = %d - %x | - Vetor[%d] = %d - %x\n", x, &x, x, vetor[x], &vetor[x]);
    }

    puts("||||||||");

    return 0;
}