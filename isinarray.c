#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

bool isinarray(int bingocard[5][5], int N, int i, int j, int numero){
    for(int k = 0; k<N; k++){
        for(int z = 0; z<N; z++){
            if (bingocard[k][z] == numero){
                return 1;
            }
        }
    }
    return 0;
}