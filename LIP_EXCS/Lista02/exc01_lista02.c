#include <stdio.h>

int main(void){
    int idade1 = 16, idade2 = 18, idade3 = 21, idade4 = 17;

    printf("Verificação de idade mínima\n");

    printf("Idade = 16: %s\n", (idade1 >= 18) ? "V" : "F");
    printf("Idade = 18: %s\n", (idade2 >= 18) ? "V" : "F");
    printf("Idade = 21: %s\n", (idade3 >= 18) ? "V" : "F");
    printf("Idade = 17: %s\n", (idade4 >= 18) ? "V" : "F");

}