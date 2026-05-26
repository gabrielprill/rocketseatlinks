#include <stdio.h>

int main(void){
    float salario;

    printf("Digite o valor do salario em reais (Ex.: 999.99):");
    scanf("%f", &salario);

    printf("O valor com o reajuste de 10 por cento de aumento é %.2f\n", salario * 1.10);

    return 0;
}