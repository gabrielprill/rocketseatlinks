#include <stdio.h>

int main(void){
    float n1, n2;

    printf("Digite a primeira nota:");
    scanf("%f", &n1);

    printf("Digite a segunda nota:");
    scanf("%f", &n2);

    printf("A media das notas e: %.2f\n", (n1 + n2) / 2);

    return 0;
}