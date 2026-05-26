int main(void){
    int qtdP, qtdM, qtdG;
    float vlrP, vlrM, vlrG;

    printf("Digite a quantia de camisetas P vendidas:");
    scanf("%d", &qtdP);

    printf("Digite o valor das camisetas P:");
    scanf("%f", &vlrP);

    float totalP = qtdP * vlrP;

    printf("Digite a quantia de camisetas M vendidas:");
    scanf("%d", &qtdM);

    printf("Digite o valor das camisetas M:");
    scanf("%f", &vlrM);

    float totalM = qtdM * vlrM;

    printf("Digite a quantia de camisetas G vendidas:");
    scanf("%d", &qtdG);

    printf("Digite o valor das camisetas G:");
    scanf("%f", &vlrG);

    float totalG = qtdG * vlrG;

    float vlrTotal = totalP + totalM + totalG;

    printf("O valor arrecadado com as vendas das camisetas P foi: R$%.2f\n", totalP);
    printf("O valor arrecadado com as vendas das camisetas M foi: R$%.2f\n", totalM);
    printf("O valor arrecadado com as vendas das camisetas G foi: R$%.2f\n", totalG);
    printf("O valor arrecadado com as vendas totais foi: R$%.2f\n", vlrTotal);

    return 0;
}