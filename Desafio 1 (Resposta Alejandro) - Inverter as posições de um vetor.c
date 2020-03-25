#include <stdio.h>

void trocar(int *a, int *b) {
    int temp = *a;

    *a = *b;
    *b = temp;
}

int main(void) {
    int vetor[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int tamanho = (sizeof(vetor)/sizeof(vetor[0]));
    
    for(int x = 0; x < tamanho / 2; x++) {
        trocar(&vetor[x], &vetor[(tamanho - 1) - x]);
    }
    
    for(int x = 0; x < tamanho; x++) {
        printf("%d ", vetor[x]);
    }

    return 0;
}