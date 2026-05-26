#include <stdio.h>
int main(void) {
    int n1, n2;

    printf("Digite o primeiro numero inteiro:");
    scanf("%d", &n1);

    printf("Digite o segundo numero inteiro:");
    scanf("%d", &n2);

    printf("Soma: %d\n", n1 + n2);
    printf("Subtração: %d\n", n1 - n2);
    printf("Multiplicação: %d\n", n1 * n2);
    
    if (n2 != 0) {
        printf("Divisão: %d\n", n1 / n2);
    } else {
        printf("ERRO: Não é possível dividir por zero.\n");
    }

    return 0;
}