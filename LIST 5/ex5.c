#include <stdio.h>
#include <stdlib.h>

/*
    TOBIAS FURTADO      170141-X

    EXERCÍCIO 5.
    A importância de R$ 780.000,00 será dividida entre três ganhadores de um concurso. Sendo que da quantia total:
        O primeiro ganhador receberá 46%;
        O segundo receberá 32%;
        O terceiro receberá o restante;
    Calcule e imprima a quantia que cada um receberá.
*/

int main(void){
    printf("O primeiro, o segundo e o terceiro ganhador recebera, respectivamente, : R$ %.2lf, R$ %.2lf e R$ %.2lf", (780000 * 0.46), (780000 * 0.32), (780000 * 0.22));

    return 1;
}
