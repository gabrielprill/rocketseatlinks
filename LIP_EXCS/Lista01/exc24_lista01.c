#include <stdio.h>
#include <math.h>

int main(void){
    int n1, cnt, dzn, und;

    printf("Digite um numero inteiro de tres digitos:");
    scanf("%d", &n1);

    cnt = n1 / 100;
    dzn = (n1 % 100) / 10;
    und = n1 % 10;

    printf("Centena: %d\n", cnt);
    printf("Dezena:  %d\n", dzn);
    printf("Unidade: %d\n", und);

    return 0;
}