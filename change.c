#include <stdio.h>
#include <stdlib.h>

void change(int bingocard[5][5], int N, int num){
    printf("O Número encontra-se no seu bingo? Escreva 1 ou 0");
    printf("\n");
    int reposta = scanf("%d", &reposta);
    if(reposta == 1){
        for(int i = 0; i < N; i++){
            for(int j = 0; j<N; j++){
                if(bingocard[i][j] == num){
                    bingocard[i][j] = 0;
                }
            }
        }
    }
}