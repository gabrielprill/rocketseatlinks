int main(void){
    float valor, desconto, vf;

    printf("Digite o valor da compra:");
    scanf("%f", &valor);

    printf("Digite a porcentagem do desconto:");
    scanf("%f", &desconto);

    printf("O valor original da compra e: R$ %.2f\n", valor);
    printf("A porcentagem do desconto e: R$ %.1f\n", desconto);

    vf = valor - (valor * (desconto / 100));

    printf("O valor final da compra e: %.2f\n", vf);

    return 0;
}