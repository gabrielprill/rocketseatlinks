#include <stdio.h>

int main(void){
    int qtd1 = 10, qtd2 = 5, qtd3 = 3, qtd4 = 0;

    printf("Verificação de estoque (5 itens ou menos)\n");

    printf("Quantidade = 10: %s\n", (qtd1 <= 5) ? "Estoque baixo" : "Estoque OK");
    printf("Quantidade = 5: %s\n", (qtd2 <= 5) ? "Estoque baixo" : "Estoque OK");
    printf("Quantidade = 3: %s\n", (qtd3 <= 5) ? "Estoque baixo" : "Estoque OK");
    printf("Quantidade = 0: %s\n", (qtd4 <= 5) ? "Estoque baixo" : "Estoque OK");

}