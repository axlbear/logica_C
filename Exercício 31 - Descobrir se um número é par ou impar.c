#include "stdio.h"

int num(int a){
    a = a % 10;
    switch (a){
        case 0 : puts("Par."); break;
        case 1 : puts("Impar."); break;
        case 2 : puts("Par."); break;
        case 3 : puts("Impar."); break;
        case 4 : puts("Par."); break;
        case 5 : puts("Impar."); break;
        case 6 : puts("Par."); break;
        case 7 : puts("Impar."); break;
        case 8 : puts("Par."); break;
        case 9 : puts("Impar."); break;
    }
}

int main (void)
{
    int x;

    puts("X = ?");
    scanf("%d", &x);

    num(x);

    return 0;
}