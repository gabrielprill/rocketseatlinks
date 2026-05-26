#include <stdio.h>

int main(void){

    int professor, monitor;

    professor = 1; monitor = 0;
    printf("professor = V, monitor = F: %s\n", (professor || monitor) ? "Autorizado" : "Não Autorizado");

    professor = 0; monitor = 1;
    printf("professor = F, monitor = V: %s\n", (professor || monitor) ? "Autorizado" : "Não Autorizado");

    professor = 1; monitor = 1;
    printf("professor = V, monitor = V %s\n", (professor || monitor) ? "Autorizado" : "Não Autorizado");

    professor = 0; monitor = 0;
    printf("professor = F, monitor = F: %s\n", (professor || monitor) ? "Autorizado" : "Não Autorizado");

    return 0;
}