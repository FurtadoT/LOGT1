#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int dado();

int main(void){
    srand(time(NULL));
    printf("Um dado foi lancado! Resultado: %d\n\n", dado());
    return 1;
}

int dado(){
    return rand()%6 + 1;
}
