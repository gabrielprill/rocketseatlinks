#include <stdio.h>

int main(void){
    int n1, n2, n3;

    printf("Digite o primeiro numero inteiro:");
    scanf("%d", &n1);

    printf("Digite o segundo numero inteiro:");
    scanf("%d", &n2);

    printf("Digite o terceiro numero inteiro:");
    scanf("%d", &n3);

    printf("A soma dos tres numeros inteiros e: %d\n", n1 + n2 + n3);

    return 0;
}