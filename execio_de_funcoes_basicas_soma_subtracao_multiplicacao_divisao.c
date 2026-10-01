#include<stdio.h>
int somar_dois_numeros(int a, int b){
	return a + b;
}
int subtrair_dois_numeros(int a, int b){
	return a - b;
}
int multiplicar_dois_numeros(int a, int b){
	return a * b;
}
float dividir_dois_numeros(int a, int b){
	return (float)a / b;
}
int main(){
	int result1, result2, result3;
	float result4;
    result1 = somar_dois_numeros(1,5);
    result2 = subtrair_dois_numeros(1,5);
    result3 = multiplicar_dois_numeros(1,5);
    result4 = dividir_dois_numeros(4,2);
	printf("%d %d %d %.2f", result1, result2, result3, result4);
	return 0;
}
