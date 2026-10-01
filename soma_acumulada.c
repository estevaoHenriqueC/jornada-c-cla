//i gonna try to save a lot of numbers and make a add with then 
#include <stdio.h>
int main(){
	int  nun, add=0 , tent = 0;
	printf("digite seu numer:\n");
		scanf("%d", &nun);
	while(nun != 0){
		add = add + nun;
		tent++;
		printf("digite outro numero:\n");
			scanf("%d", &nun);
	}
	printf("a quantidade de numeros:%d ", tent);
	printf("o resultado:%d ", add);
	return 0;
}
