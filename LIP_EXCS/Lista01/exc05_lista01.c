#include <stdio.h>

int main(void){
    float base, altura;

    printf("Digite a base do retangulo:");
    scanf("%f", &base);

    printf("Digite a altura do retangulo:");
    scanf("%f", &altura);

    printf("A area do retangulo e: %.2f\n", base * altura);

    return 0;
}