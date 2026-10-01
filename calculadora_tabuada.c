// Calcula e exibe a tabuada de um numero de 1 a 10
#include <stdio.h>

int main() {
    int numero;

    printf("Digite o numero que deseja multiplicar:\n");
    scanf("%d", &numero);

    printf("\n--- Tabuada do %d ---\n", numero);
    for (int i = 1; i <= 10; i++) {
        int resultado = numero * i;
        printf("%d x %d = %d\n", numero, i, resultado);
    }

    return 0;
}
