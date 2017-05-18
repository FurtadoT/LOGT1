#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
    TOBIAS FURTADO      170141-X
    11.05

    EXERCÍCIO 3
*/

int main(void){
    int n1 = 0, n2 = 0, n3 = 0, n4 = 0, n5 = 0, n6 = 0, valor, contadorA;

	srand(time(NULL));

	for(contadorA = 0; contadorA < 50; contadorA++){
		valor = rand()%6+1;
		switch (valor){
            case 1:
                n1++;
                break;
            case 2:
                n2++;
                break;
            case 3:
                n3++;
                break;
            case 4:
                n4++;
                break;
            case 5:
                n5++;
                break;
            case 6:
                n6++;
                break;
            default:
                break;
		}
	}

	printf("PERCENTUAL DE FACES:\n\t1: %.2lf\n\t2: %.2lf\n\t3: %.2lf\n\t4: %.2lf\n\t5: %.2lf\n\t6: %.2lf", n1*2.0, n2*2.0, n3*2.0, n4*2.0, n5*2.0, n6*2.0);

    return 1;
}
