#include <stdio.h>

int main(void){

    printf("Situação do Aluno (Média >= 7 e Faltas <= 15):\n");

    printf("Media 7.0, Faltas 15: %s\n", (7.0 >= 7 && 15 <= 15) ? "Regular" : "Irregular");
    printf("Media 8.0, Faltas 10: %s\n", (8.0 >= 7 && 10 <= 15) ? "Regular" : "Irregular");
    printf("Media 6.5, Faltas 8: %s\n", (6.5 >= 7 && 8 <= 15) ? "Regular" : "Irregular");
    printf("Media 9.0, Faltas 18: %s\n", (9.0 >= 7 && 18 <= 15) ? "Regular" : "Irregular");

}