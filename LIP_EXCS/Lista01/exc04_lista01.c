#include <stdio.h>

int main(void){
    int n1;

    printf("Digite o numero inteiro:");
    scanf("%d", &n1);

    printf("Dobro: %d\n", n1 * 2);
    printf("Triplo: %d\n", n1 * 3);
    printf("Metade: %d\n", n1 / 2);

    return 0;
}