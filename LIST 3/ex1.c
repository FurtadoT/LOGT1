#include <stdio.h>
#include <stdlib.h>

/*
	TOBIAS FURTADO		170141-X
	
	EXERCÍCIO 1.
	Faça um algaritmo que leia dois valores inteiros distintos e informe qual é o maior.
*/

int main(void){
    int num1, num2;
    
    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);
    
    if (num1 < num2)
       num1 = num2;
       
    printf("O mairo numero e: %d", num1);
    
    return 0;
}
