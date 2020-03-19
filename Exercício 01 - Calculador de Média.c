#include <stdio.h>

int main (void)
{
    float p1, p2, media;

    printf("Nota da P1?\n>>> ");
    scanf("%f", &p1);

    printf("Nota da P2?\n>>> ");
    scanf("%f", &p2);

    media = ((p1 * 3) + (p2 * 7)) / 10;

    printf("Media = %.1f\n", media);

    if (media >= 6) printf("Voce foi aprovado.");
    else printf("Voce foi Reprovado.");

    return 0;
}