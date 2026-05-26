#include <stdio.h>

int main(void){
    float n1, n2, n3, n4, media, total;

    printf("Digite a primeira nota: ");
    scanf("%f", &n1);

    printf("Digite a segunda nota: ");
    scanf("%f", &n2);

    printf("Digite a terceira nota: ");
    scanf("%f", &n3);

    printf("Digite a quarta nota: ");
    scanf("%f", &n4);

    media = (n1 + n2 + n3 + n4) / 4;
    total = n1 + n2 + n3 + n4;

    printf("A media das notas e: %.2f\n", media);
    printf("A soma total das notas e: %.2f\n", total);

    return 0;
}