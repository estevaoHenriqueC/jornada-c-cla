// Calcula a media aritmetica de tres numeros inteiros
#include <stdio.h>

float calcular_media(int primeiro_numero, int segundo_numero, int terceiro_numero) {
    // Retorna direto o resultado da conta, sem precisar criar 'soma' e 'result'
    return (primeiro_numero + segundo_numero + terceiro_numero) / 3.0f;	
}

int main() {
    int numero1, numero2, numero3;

    printf("Digite os tres numeros separados por espaco:\n");
    scanf("%d %d %d", &numero1, &numero2, &numero3);

    float media_final = calcular_media(numero1, numero2, numero3);
    
    printf("A media dos numeros eh: %.2f\n", media_final);
    
    return 0;
}
