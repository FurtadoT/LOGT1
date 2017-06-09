#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int dado();

int main(void){
    long int lancamentos[6] = {0, 0, 0, 0, 0, 0};
    long int contadorA;
    srand(time(NULL));

    for (contadorA = 0; contadorA < 1000000; contadorA++)
        lancamentos[dado()-1]++;

    printf("1: %.2lf%%; 2: %.2lf%%; 3: %.2lf%%; 4: %.2lf%%; 5: %.2lf%%; 6: %.2lf%%.", lancamentos[0]/10000.0,  lancamentos[1]/10000.0,  lancamentos[2]/10000.0,  lancamentos[3]/10000.0,  lancamentos[4]/10000.0,  lancamentos[5]/10000.0);

    return 1;
}

int dado(){
    return rand()%6 + 1;
}
