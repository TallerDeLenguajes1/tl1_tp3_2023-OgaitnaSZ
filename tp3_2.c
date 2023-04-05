#include <stdio.h>
#include <stdlib.h>
#define A 5
#define M 12

float prod[A][M];
float prom[A];
int mejorMes[3];

void main(){
    for(int i=0 ; i<A ; i++){
        for(int j=0 ; j<M ; j++){
            prod[i][j] = 10000 + rand()%40000;
            printf("%.0f ", prod[i][j]);
            prom[i] = prom[i] + prod[i][j];
        }
        printf("\n");
    }

    printf("\nPromedio en anios:");
    for(int i=0 ; i<A ; i++){
        printf("\n%d: %.2f", i+1, prom[i]/12);
    }

    for(int i=0 ; i<A ; i++){
        for(int j=0 ; j<M ; j++){
            if(prod[i][j] > mejorMes[3]){
                mejorMes[0] = i;
                mejorMes[1] = j;
                mejorMes[3] = prod[i][j];
            }
        }
    }
    printf("\n\nEl valor maximo es: %d", mejorMes[3]);
    printf("\nOcurrio en el mes %d del anio %d", mejorMes[1]+1, mejorMes[0]+1);
}