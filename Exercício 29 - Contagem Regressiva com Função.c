#include "stdio.h"

int dec(int a){
    int i;

    for (i = a; i > 0; i--){
        printf("%d\n", i);
    }
}

int main (void)
{
    int x;
    puts("X = ?");
    scanf("%d", &x);

    dec(x);
    return 0;
}