#include <stdio.h>

int main(void){
    int n1, vrf;

    printf("Digite o numero inteiro:");
    scanf("%d", &n1);

    vrf = n1 % 2;

    if(vrf != 0){
        printf("O numero digitado é impar\n");
    } else {
        printf("O numero digitado é par\n");
    }

    return 0;
}