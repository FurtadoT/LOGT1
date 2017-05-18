#include <stdio.h>
#include <stdlib.h>

int main(void){
	int num;
	
	printf("Digite um numero: ");
	scanf("%d", &num);
	
	if (num > 20)
		printf("O numero %d e maior que 20", num);
	
	return 0;
}