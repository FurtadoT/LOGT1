#include <stdio.h>
#include <stdlib.h>

/*
    TOBIAS FURTADO      170141-X

    EXERC�CIO 5.
    A import�ncia de R$ 780.000,00 ser� dividida entre tr�s ganhadores de um concurso. Sendo que da quantia total:
        O primeiro ganhador receber� 46%;
        O segundo receber� 32%;
        O terceiro receber� o restante;
    Calcule e imprima a quantia que cada um receber�.
*/

int main(void){
    printf("O primeiro, o segundo e o terceiro ganhador recebera, respectivamente, : R$ %.2lf, R$ %.2lf e R$ %.2lf", (780000 * 0.46), (780000 * 0.32), (780000 * 0.22));

    return 1;
}
