#include "stdio.h"

int main (void)
{
    int alunos, i;
    float a, notas, media;

    printf("Quantos alunos?\n>>> ");
    scanf("%d", &alunos);

    for (i = 1; i <= alunos; i++){
        printf("Qual a nota do aluno %d?\n>>> ", i);
        scanf("%f", &a);
        notas += a;
    }

    media = notas / alunos;

    printf("A média dos alunos será %.1f", media);

    return 0;
}