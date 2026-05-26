#include <stdio.h>

int main(void) {
    float n1, n2;

    printf("Digite o primeiro numero real:");
    scanf("%f", &n1);

    printf("Digite o segundo numero real:");
    scanf("%f", &n2);
 
    printf("Soma: %.2f\n", n1 + n2);

    return 0;
}

