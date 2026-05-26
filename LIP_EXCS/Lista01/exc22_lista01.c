#include <stdio.h>
#include <math.h>

int main(void){
    int n1, qd, cubo, raiz, mtd;

    printf("Digite o numero inteiro:");
    scanf("%d", &n1);

    qd = pow(n1, 2);
    cubo = pow(n1, 3);
    raiz = sqrt(n1);
    mtd = n1 / 2;


    printf("O numero ao quadrado e: %d\n", qd);
    printf("O numero ao cubo e: %d\n", cubo);
    printf("A raiz aproximada do numero e: %d\n", raiz);
    printf("A metade do numero e: %d\n", mtd);

    return 0;
}