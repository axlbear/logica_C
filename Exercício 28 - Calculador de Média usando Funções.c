#include "stdio.h"

float media (float a, float b){
    float c;
    c = ((a * 3) + (b * 7)) / 10;
    return c;
}

float maior (float a, float b){
    if (a > b){
        return a;
    }

    else {
        return b;
    }
}

int main (void)
{
    float p1, p2, p3, med;

    puts("P1 = ?");
    scanf("%f", &p1);
    puts("P2 = ?");
    scanf("%f", &p2);
    puts("P3 = ?");
    scanf("%f", &p3);

    if (p1 < 6 && p2 > 6) {p1 = maior(p1, p3); med = media(p1, p2);}
    else if (p1 > 6 && p2 < 6) {p2 = maior(p2, p3); med = media(p1, p2);}
    else if (p1 > 6 && p2 > 6) {med = media(p1, p2);}
    else {p1 = maior(p1, p2); med = media(p1, p3);}

    printf("Sua média é %.1f", med);
    if (med >= 6) {puts("Você foi aprovado.");}
    else {puts("Você foi reprovado.");}

    return 0;
}