#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define MAX 30

int verifPalindromo(char *str);

int main(void){
    char str[MAX];

    printf("Digite uma palavra: ");
    fflush(stdin);
    gets(str);

    if (verifPalindromo(str) == 1)
        printf("E palindromo.");
    else
        printf("Nao e palindromo");

    return 1;
}

int verifPalindromo(char *str){
    char strInvertida[20];
    int contadorA;

    for (contadorA = 0; contadorA < strlen(str); contadorA++)
        strInvertida[contadorA] = str[strlen(str) - (contadorA + 1)];

    strInvertida[strlen(str)] = '\0';

    if (strcmp(str, strInvertida) == 0)
        return 1;

    return 0;
}
