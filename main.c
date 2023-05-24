#include <stdio.h>
#include <stdlib.h>

int conversao1(int n, int b) {
    if (n == 0) {
        return 0;
    }
    else {
        return (n % b) + 10 * conversao1(n / b, b);
    }
}

int conversao2(int n, int b) {
    if (n == 0) {
        return 0;
    }
    else {
        return (n % 10) + b * conversao2(n / 10, b);
    }
}

int main() {
    int n, b, opcao;
    printf("Digite um numero: ");
    scanf("%d", &n);
    printf("Digite a base: ");
    scanf("%d", &b);
    printf("Escolha uma opcao: \n");
    printf("1 - Decimal para base escolhida\n");
    printf("2 - Base escolhida para decimal\n");
    scanf("%d", &opcao);
    switch (opcao) {
        case 1:
            printf("%d", conversao1(n, b));
            break;
        case 2:
            printf("%d", conversao2(n, b));
            break;
        default: 
            printf("Opcao invalida");
    }
    return 0;
}
