#include "stdio.h"
#include "stdlib.h"

int maior (int a[], int b){
    int x, y;

    for (x = 1; x < b; x++){
        for (y = 0; y < b; y++){
            if (a[y] < a[y + 1]){
                int z = a[y];
                a[y] = a[y + 1];
                a[y + 1] = z;
            }
        }
    }

    return a[0];
}

int main (void)
{
    int i, x;

    printf("Quantas posições no vetor?\n>>> ");
    scanf("%d", &i);

    int vetor[i];

    for (x = 0; x < i; x++){
        printf("Informe o valor da posição vetor[%d]:\n>>> ", x);
        scanf("%d", &vetor[x]);
    }

    int tamanho = (sizeof(vetor) / sizeof(vetor[0]));

    for (x = 0; x < tamanho; x++){
        printf("X = %d - %x | Vetor[%d] = [%d] - %x\n", x, &x, x, vetor[x], &vetor[x]);
    }

    puts("");
    printf("O maior número entre eles é: %d", maior(vetor, tamanho));

    return 0;
}