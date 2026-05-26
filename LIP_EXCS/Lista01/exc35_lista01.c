#include <stdio.h>

int main(void){
    float n1, n2, media, total;
    int faltas, faltasLimite, faltasRestantes;

    printf("Digite a primeira nota: ");
    scanf("%f", &n1);

    printf("Digite a segunda nota: ");
    scanf("%f", &n2);

    printf("Digite a quantia de faltas do aluno: ");
    scanf("%d", &faltas);

    printf("Digite o limite de faltas: ");
    scanf("%d", &faltasLimite);

    media = (n1 + n2) / 2;
    total = n1 + n2;

    faltasRestantes = faltasLimite - faltas;


    printf("A media das notas e: %.2f\n", media);
    printf("A soma total das notas e: %.2f\n", total);

    if(faltas > faltasLimite){
        printf("O aluno excedeu o limite de faltas\n");
    } else if(faltas == faltasLimite) {
        printf("O aluno está no limite de faltas\n");
    } else{
        printf("O total de faltas restantes do aluno e: %d\n", faltasRestantes);
    }

    return 0;
}