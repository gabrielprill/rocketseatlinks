#include <stdio.h>
#include <stdbool.h>

int main(void){

    int idade = 20, faltas = 20;
    float media = 6.5;
    bool usuarioAtivo = true;
    bool possuiPermissaoEspecial = false;

    if (idade >= 18) {
        printf("O usuário é maior de idade.\n");
    } else {
        printf("O usuário é menor de idade.\n");
    }

    if (media >= 7.0) {
        printf("O usuário está acima da média.\n");
    } else {
        printf("O usuário está abaixo da média.\n");
    }
    
    if (faltas <= 15) {
        printf("O usuário está com as faltas abaixo do limite previsto.\n");
    } else {
        printf("O usuário está com as faltas acima do limite previsto.\n");
    }

    if (usuarioAtivo == true && possuiPermissaoEspecial == true) {
        printf("O usuário está ativo e possui permissão especial.\n");
    } else {
        printf("O usuário não está ativo ou não possui permissão especial.\n");
    }

    if (usuarioAtivo == true || possuiPermissaoEspecial == true) {
        printf("O usuário está ativo ou possui permissão especial.\n");
    } else {
        printf("O usuário não está ativo e não possui permissão especial.\n");
    }

    if (idade >= 18 && faltas <= 15) {
        printf("O usuário é maior de idade e está com as faltas abaixo do limite previsto.\n");
    } else {
        printf("O usuário é menor de idade ou está com as faltas acima do limite previsto.\n");
    }

    if (media >= 7 || faltas <= 15) {
        printf("O usuário está acima da média ou com as faltas abaixo do limite previsto.\n");
    } else {
        printf("O usuário está abaixo da média e com as faltas acima do limite previsto.\n");
    }

    if (!usuarioAtivo) {
        printf("O usuário não está ativo)\n");
    } else {
        printf("O usuário está ativo)\n");
    }

    return 0;
}