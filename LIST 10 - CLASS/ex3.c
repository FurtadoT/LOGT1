#include <stdio.h>
#include <stdlib.h>

#define MAX 20

void addCrescente(int *v_Int, int nValue, int tamanho);

int main(void){
    int v_Int[MAX], contadorA, nValue;

    for (contadorA = 0; contadorA < MAX; contadorA++){
        scanf("%d", &nValue);
        addCrescente(v_Int, nValue, contadorA);
    }

    printf("\n\nVALORES:\n");
    for (contadorA = 0; contadorA < MAX; contadorA++){
        printf("%d", v_Int[contadorA]);
        if (contadorA+1 != MAX)
            printf(", ");
    }
    printf(".");

    return 1;
}

void addCrescente(int *v_Int, int nValue, int tamanho){
    int nValueAux, posAuxiliar;

    v_Int[tamanho] = nValue;
    if (tamanho != 0){
        do{
            posAuxiliar = tamanho-1;
            if (v_Int[posAuxiliar] > nValue){
                nValueAux = v_Int[posAuxiliar];
                v_Int[posAuxiliar] = nValue;
                v_Int[tamanho] = nValueAux;
                tamanho--;
            } else
                break;
        } while (posAuxiliar != 0);
    }
}
