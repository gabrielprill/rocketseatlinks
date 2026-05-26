#include <stdio.h>

int main(void){
    float distancia, gasolina, consumo;

    printf("Digite a distancia percorrida pelo carro:");
    scanf("%f", &distancia);

    printf("Digite o combustivel gasto em litros:");
    scanf("%f", &gasolina);

    consumo = distancia / gasolina;


    printf("O consumo médio de gasolina é de: %.2f km por litro\n", consumo);

    return 0;
}