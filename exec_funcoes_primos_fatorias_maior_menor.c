#include <stdio.h>
int maior(int a, int b){
	if(a > b) return a;
	else return b;
}
int primo(int a){
	int i, flag =1;
	//ja encerra se o numero for menor que dois 
	if(a < 2) return 0;
	//o if sem colchetes serve para quando e uma linha de codigo so, que vai ser testada
	for(i=2; i<a; i++){
		if(a % i == 0) flag = 0;
	}
	return flag;
}
int fatorial(int a){
	int i, fac = 1;
	//i fica rodando e contando em loop para multiplicar o fac ate la 
	for(i=1; i<=a; i++){
		fac = fac*i;
	}
	return fac;
}
int main(){
	int a, b, result;
	printf("digite seus numeros para comparacao: ");
		scanf("%d %d", &a, &b);
	printf("maior: %d\n", maior(a, b));
	if(primo(a) == 1){
		printf("e primo\n");
	} else {
		printf("nao e primo\n");
	}
	printf("fatorial: %d\n", fatorial(a));
	
	return 0;
}
