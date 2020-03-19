#include "stdio.h"
#include "math.h"

int menu(); //Função Menu

int main (void) //Função Main
{
    int n, m;
    float min_x, max_x, min_y, max_y, cateto_x, cateto_y, hipo, media, porcentagem;
    //Plano Cartesiano, sendo X = Tempo e Y = Valores
    
    printf("Valor inicial para avaliação:\n>>>R$ ");
    scanf("%f", &min_y);
    printf("Valor final para avaliação:\n>>>R$ ");
    scanf("%f", &max_y);
    printf("Dia inicial no mês da avaliação:\n>>> ");
    scanf("%f", &min_x);
    printf("Dia final no mês da avaliação:\n>>> ");
    scanf("%f", &max_x);

    cateto_x = max_x - min_x;//Tempo
    cateto_y = max_y - min_y;//Valores
    hipo = hypot(cateto_x, cateto_y);//Rendimento no período de avaliação; Poderia também ser sqrt((pow(cateto_x, 2))+(pow(cateto_y, 2)));
    media = hipo / cateto_x;//Média de lucro/dia

    printf("Valor Inicial: R$ %.2f\nValor Final: R$ %.2f\nDurante um período de %.0f dias:\nRendimento: R$ %.2f\nMédia de Lucro/Dia: R$ %.2f\n", min_y, max_y, cateto_x, hipo, media);
 
    return 0;
}