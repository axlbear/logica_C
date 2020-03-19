#include <stdio.h>

int main (void)
{
    int real, dobro;
    int nome[60];
    
    printf("Informe um número real:\n>>> ");
    scanf("%i", &real);

    dobro = real * 2;

    printf("O dobro de %i é %i", real, dobro);

    return 0;
}