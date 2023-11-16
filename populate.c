#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "isinarray.c"

void populatearray(int bingocard[5][5], int N){
    int min = 1;
    int max = 99;
    int numero;
    int decisao;
    for(int i = 0; i<N; i++){
        for(int j = 0; j<N; j++){
            decisao = 1;
            while(decisao == 1){
                numero = rand() % (max - min + 1) + min;
                decisao = isinarray(bingocard, N, j, i, numero);
            }
            bingocard[i][j] = numero;
        }
    }
}