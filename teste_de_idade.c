//try to know who is te oldest one 
#include<stdio.h>
int main(){
	int idade;
	printf("digite sua idade:\n");
		scanf("%d", &idade);
	if(idade <= 12){
		printf("voce e criança\n");
	} else if (idade <= 17){
		printf("voce e adolescente\n");
	} else if (idade <= 59){
		printf("voce e adulto\n");
	} else {
		printf("voce e idoso\n");
	}
	return 0;
}
