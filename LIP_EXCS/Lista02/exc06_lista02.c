#include <stdio.h>

int main(void){

    int idadeCandidato;

    if (idadeCandidato >= 18){
        printf("Candidato está apto para participar da seleção.\n");
    } else {
        printf("Candidato não está apto para participar da seleção.\n");
    }

    float mediaAluno;
    int frequenciaAluno;

    if(mediaAluno >= 7 && frequenciaAluno >= 75){
        printf("Aluno está aprovado.\n");
    } else {
        printf("Aluno está reprovado.\n");
    }

    int autenticado, acessoTemporario;

    if (autenticado || acessoTemporario == 1) {
        printf("Usuário pode acessar o sistema.\n");
    } else {
        printf("Usuário não pode acessar o sistema.\n");
    }

    int clienteInadimplente;

    if (clienteInadimplente == 0) {
        printf("Cliente está apto a comprar.\n");
    } else {
        printf("Cliente não está apto a comprar.\n");
    }

    int nota;

    if (nota >= 0 && nota <= 10) {
        printf("Nota é válida.\n");
    } else {
        printf("Nota não é válida.\n");
    }

    return 0;
}