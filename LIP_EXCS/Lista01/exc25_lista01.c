#include <stdio.h>

int main(void){
    int totalDias, anos, meses, diasRestantes;

    printf("Digite a quantidade de dias: ");
    scanf("%d", &totalDias);

    anos = totalDias / 365;
    meses = (totalDias % 365) / 30;
    diasRestantes = (totalDias % 365) % 30;

    printf("\nConversao aproximada:\n");
    printf("%d anos, %d meses e %d dias.\n", anos, meses, diasRestantes);

    return 0;
}