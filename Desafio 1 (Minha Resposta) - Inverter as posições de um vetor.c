#include <stdio.h>

int trocar(int a[], int i){ 
    int b[i];
    int x, y;

    for (x = 0, y = i - 1; x < i, y >= 0; x++, y--){
        printf("x = %d, y = %d\n", x, y);
        b[x] = a[y];
        printf("b[x] = %d, a[y] = %d\n", b[x], a[y]);
    }

    for (x = 0; x < i; x++){
        printf("x = %d\n", x);
        a[x] = b[x];
        printf("a[x] = %d, b[x] = %d\n", a[x], b[x]);
    }
}

int main (void)
{
    int vetor[] = {1, 2, 3, 4, 5};
    int tamanho = (sizeof(vetor) / sizeof(vetor[0]));

    printf("Um vetor possui %d posiçoes com os valores %d, %d, %d, %d, %d\n", tamanho, vetor[0], vetor[1], vetor[2], vetor[3], vetor[4]);

    trocar(vetor, tamanho);

    printf("Um vetor agora possui os valores %d, %d, %d, %d, %d", vetor[0], vetor[1], vetor[2], vetor[3], vetor[4]);

    return 0;
}