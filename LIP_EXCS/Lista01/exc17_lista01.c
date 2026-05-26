int main(void){
    float salario;

    printf("Digite o valor do salario em reais (Ex.: 999.99):");
    scanf("%f", &salario);

    salario = salario * 1.15;
    printf("O valor com o reajuste de 15 por cento de aumento é %.2f\n", salario);

    salario = salario * 0.92;
    printf("O salario final com reajuste de 8 por cento de desconto é %.2f\n", salario);

    return 0;
}