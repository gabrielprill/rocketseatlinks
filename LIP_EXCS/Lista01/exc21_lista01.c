#include <stdio.h>

int main(void){
    float tempC, tempF;

    printf("Digite a temperatura em graus Celsius:");
    scanf("%f", &tempC);

    tempF = (tempC * 1.8) + 32;

    printf("A temperatura em Fahrenheit e: %.2f\n", tempF);

    return 0;
}