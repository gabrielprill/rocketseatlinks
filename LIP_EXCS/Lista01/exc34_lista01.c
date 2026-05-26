#include <stdio.h>
#include <math.h>

int main(void){
    float n1, db, tpl, qd, cubo, trc;

    printf("Digite o numero inteiro:");
    scanf("%f", &n1);

    db = n1 * 2;
    tpl = n1 * 3;
    qd = pow(n1, 2);
    cubo = pow(n1, 3);
    trc = n1 / 3;


    printf("O dobro do numero e: %.2f\n", db);
    printf("O triplo do numero e: %.2f\n", tpl);
    printf("O numero ao quadrado e: %.2f\n", qd);
    printf("O numero ao cubo e: %.2f\n", cubo);
    printf("A terça parte do numero e: %.2f\n", trc);

    return 0;
}