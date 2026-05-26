int main(void){
    int n1, vrf3, vrf5;

    printf("Digite o numero inteiro:");
    scanf("%d", &n1);

    vrf3 = n1 % 3;
    vrf5 = n1 % 5;

    if(vrf3 == 0 && vrf5 != 0){
        printf("O numero digitado é multiplo apenas de 3\n");
    } else if (vrf3 != 0 && vrf5 == 0) {
        printf("O numero digitado é multiplo apenas de 5\n");
    } else if (vrf3 == 0 && vrf5 == 0){
        printf("O numero digitado é multiplo de 3 e de 5\n");
    } else {
        printf("O numero digitado é nao multiplo de 3 nem de 5\n");
    }

    return 0;
}