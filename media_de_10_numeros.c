//try to make read ten numbers and make the add after make the mean;
#include <stdio.h>
int main(){
	int nun, add=0, i, count = 9;
	float mean;
	printf("digite seu numero:\n");
		scanf("%d", &nun);
	for(i=1; i <= 9; i++){
		printf("digite mais %d numeros:\n", count);
			scanf("%d", &nun);
		add = add + nun;
		count--;
	}
	printf("esta e a media dos numeros %.2f", mean = (float)add / 10);
	return 0;
} 
