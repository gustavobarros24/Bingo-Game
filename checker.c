#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

void addtoarray(int sairam[99], int numero){
    sairam[numero-1] = numero;
}

bool checker(int numero, int sairam[99]){
    for(int i = 0; i < 99; i++){
        if(sairam[i] == numero){
            return 1;
        }
    }
    addtoarray(sairam,numero);
    return 0;
}