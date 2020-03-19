#include <stdio.h>
#include <math.h>

int main (void)
{
    float altura, peso, imc;

    printf("Qual é a sua Altura?\n>>> ");
    scanf("%f", &altura);
    printf("Qual é seu Peso?\n>>> ");
    scanf("%f", &peso);

    imc = peso / pow(altura, 2);

    if (imc <= 17) printf("Seu IMC é %f, você está muito abaixo do peso.", imc);
    else if (imc > 17 && imc <= 18.49) printf("Seu IMC é %f, você está abaixo do peso.", imc);
    else if (imc > 18.5 && imc <= 24.99) printf("Seu IMC é %f, você está no peso normal.", imc);
    else if (imc > 25 && imc <= 29.99) printf("Seu IMC é %f, você está acima do peso.", imc);
    else if (imc > 30 && imc <= 34.99) printf("Seu IMC é %f, Obesidade 1.", imc);
    else if (imc > 35 && imc <= 39.99) printf("Seu IMC é %f, Obesidade 2.", imc);
    else if (imc > 40) printf("Seu IMC é %f, Obesidade 3.", imc);

    return 0;
}