int main(void){
    int n1;
    float n2, soma, sub, mult, div;

    printf("Digite o numero inteiro:");
    scanf("%d", &n1);

    printf("Digite o numero real (Ex.: 5.50):");
    scanf("%f", &n2);

    soma = n1 + n2;
    sub = n1 - n2;
    mult = n1 * n2;
    div = n1 / n2;

    printf("RESULTADOS:\n");
    printf("Soma:          %.2f\n", soma);
    printf("Subtracao:     %.2f\n", sub);
    printf("Multiplicacao: %.2f\n", mult);
    printf("Divisao:       %.2f\n", div);

    return 0;
}