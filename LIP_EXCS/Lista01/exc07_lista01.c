#include <stdio.h>

int main(void){
    int n1, n2;

    printf("Digite o primeiro numero inteiro:");
    scanf("%d", &n1);

    printf("Digite o segundo numero inteiro:");
    scanf("%d", &n2);

    printf("A sobra da divisão dos dois numeros e: %d\n", n1 % n2);

    return 0;
}