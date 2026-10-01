#include <stdio.h>

int main() {
    int numero;
    int eh_primo = 1; // 1 significa verdadeiro, 0 significa falso

    printf("Digite o numero que deseja verificar:\n");
    scanf("%d", &numero);

    // Regra matemática: números menores ou iguais a 1 não são primos
    if (numero <= 1) {
        eh_primo = 0;
    } else {
        // Testa divisores de 2 até (numero - 1)
        for (int divisor = 2; divisor < numero; divisor++) {
            if (numero % divisor == 0) {
                eh_primo = 0; // Encontrou um divisor, então não é primo
                break;        // Interrompe o laço na hora (Eficiência!)
            }
        }
    }

    // Exibe o resultado de forma limpa usando if/else
    if (eh_primo) {
        printf("O numero %d eh primo.\n", numero);
    } else {
        printf("O numero %d nao eh primo.\n", numero);
    }

    return 0;
}
