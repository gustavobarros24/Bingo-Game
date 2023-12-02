#include <stdio.h>
#include <stdlib.h>

/*void change(int bingocard[5][5], int N, int num){
    printf("O Número encontra-se no seu bingo? Escreva 1 ou 0");
    printf("\n");
    int resposta = scanf("%d", &resposta);
    if(resposta == 1){
        for(int i = 0; i < N; i++){
            for(int j = 0; j<N; j++){
                if(bingocard[i][j] == num){
                    bingocard[i][j] = 0;
                }
            }
        }
    }
}*/

void change(int bingocard[5][5], int N, int num) {
    int resposta;
    do {
        printf("O Número encontra-se no seu bingo? Escreva 1 ou 0: ");
        int result = scanf("%d", &resposta);

        if (result != 1) {
            // Clear the input buffer in case of invalid input
            while (getchar() != '\n');
            
            printf("Erro: A sua resposta deverá ser apenas 1 ou 0\n");
        } else if (resposta != 0 && resposta != 1) {
            printf("Erro: A sua resposta deverá ser apenas 1 ou 0\n");
        } else {
            break; // Valid input, break out of the loop
        }
    } while (1);
    if (resposta == 1) {
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                if (bingocard[i][j] == num) {
                    bingocard[i][j] = 0;
                }
            }
        }
    }
}