// Calcula as quatro operacoes basicas entre dois numeros com protecao contra divisao por zero
#include <stdio.h>

int main() {
    int primeiro_numero, segundo_numero;

    printf("Digite o primeiro numero:\n");
    scanf("%d", &primeiro_numero);

    printf("Digite o segundo numero:\n");
    scanf("%d", &segundo_numero);

    // Realiza os calculos basicos
    float soma = (float)(primeiro_numero + segundo_numero);
    float subtracao = (float)(primeiro_numero - segundo_numero);
    float multiplicacao = (float)(primeiro_numero * segundo_numero);

    // Exibe os resultados comuns
    printf("\n--- Resultados ---\n");
    printf("Soma: %.2f\n", soma);
    printf("Subtracao: %.2f\n", subtracao);
    printf("Multiplicacao: %.2f\n", multiplicacao);

    // Valida e exibe a divisao
    if (segundo_numero == 0) {
        printf("Divisao: Nao eh possivel dividir por zero!\n");
    } else {
        float divisao = (float)primeiro_numero / segundo_numero;
        printf("Divisao: %.2f\n", divisao);
    }

    return 0;
}
