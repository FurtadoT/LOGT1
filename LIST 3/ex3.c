#include <stdio.h>
#include <stdlib.h>

/*
	TOBIAS FURTADO		170141-X
	
	EXERCÍCIO 3.
	Elabore um algoritmo que leia dois números inteiros e mostre o resultado da diferença do maior valor pelo menor.
*/

int main(void){
    int num1, num2, aux;
    
    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);
    
    if (num1 < num2){
       aux = num1;
       num1 = num2;
       num2 = aux;
    }
    
    printf("A diferenca do maior pro menor numero e: %d", (num1 - num2));   
    
    return 0;
}
