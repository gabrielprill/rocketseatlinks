#include <stdio.h>
#include <math.h>

int main(void){
    int n1, n2, qct, rst;

    printf("Digite o primeiro numero inteiro (dividendo): ");
    scanf("%d", &n1);

    printf("Digite o segundo numero inteiro (divisor): ");
    scanf("%d", &n2);

    qct = n1 / n2;
    rst = n1 % n2;

    printf("Quociente inteiro: %d\n", qct);
    printf("Resto da divisao: %d\n", rst);

    return 0;
}