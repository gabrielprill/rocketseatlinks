#include <stdio.h>

int main(void){
    float lado;

    printf("Digite o lado do quadrado:");
    scanf("%f", &lado);

    printf("A area do quadrado e: %.2f\n", lado * lado);

    return 0;
}