#include <stdio.h>
#include <math.h>

int main (void)
{
    float minX, minY, maxX, maxY, catX, catY, hipo;
    printf("Plano Cartesiano - Cáculo da distância de dois pontos\n");
    printf("Defina o ponto mínimo de X:\n>>> ");
    scanf("%f", &minX);
    printf("Defina o ponto mínimo de Y:\n>>> ");
    scanf("%f", &minY);
    printf("Defina o ponto máximo de X:\n>>> ");
    scanf("%f", &maxX);
    printf("Defina o ponto máximo de Y:\n>>> ");
    scanf("%f", &maxY);

    catX = maxX - minX;
    catY = maxY - minY;
    hipo = sqrt((pow(catX, 2)) + (pow(catY, 2)));    

    printf("A distância entre os dois pontos (Hipotenusa) no plano cartesiano é: %.3f\n", hipo);

    return 0;
}