//try to know the biggest end the lower one and the soma of all
#include<stdio.h>
int main(){
	int nun1, nun2, nun3, nun4, nun5, soma, maior, menor;
	printf("digite o numero 1:\n");
		scanf("%d", &nun1);
	printf("digite o numero 2:\n");
		scanf("%d", &nun2);
	printf("digite o numero 3:\n");
		scanf("%d", &nun3);
	printf("digite o numero 4:\n");
		scanf("%d", &nun4);
	printf("digite o numero 5:\n");
		scanf("%d", &nun5);
	maior = nun1;
	menor = nun1;
	if(nun2 > maior){
		maior = nun2;
	} if(nun3 > maior){
		maior = nun3;
	} if(nun4 > maior){
		maior = nun4;
	} if(nun5 > maior){
		maior = nun5;
	}
	if(nun1 < menor){
		menor = nun1;
	} if(nun2 < menor){
		menor = nun2;
	} if(nun3 < menor){
		menor = nun3;
	} if(nun4 < menor){
		menor = nun4;
	} if(nun5 < menor){
		menor = nun5;
	}
	soma = nun1 + nun2 + nun3 + nun4 + nun5;
	printf("sendo a soma deles: %d\n e o maior sendo: %d\n e o menor sendo: %d", soma, maior, menor);
	return 0;
}

