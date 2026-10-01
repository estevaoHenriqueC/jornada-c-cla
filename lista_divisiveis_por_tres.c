//i try to make a a return with the numbers of divided by tree
#include <stdio.h>
int main(){
	int i, nun;
	printf("digite seu numero:\n");
		scanf("%d", &nun);
	for(i=1; i<=nun; i++){
		if(i % 3 == 0){
			printf("%d\n", i);
		}
	}
	return 0;
}
