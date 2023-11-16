#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "populate.c"
#include "bingo.c"
#include "change.c"
#include "checker.c"

int main(){
    srand(time(NULL));
    int N = 5;
    int bingocard[N][N];
    int flag = 0;
    
    populatearray(bingocard,N);

    for(int i = 0; i<N; i++){
        for(int j = 0; j<N; j++){
            printf("%d      ", bingocard[i][j]);
        }
        printf("\n");
    }
    int count = 0;
    while(flag != 1){
        int sairam[99];
        int min = 1;
        int max = 99;
        int num = rand() % (max - min + 1) + min;
        while(checker(num, sairam) != 0){
            num = rand() % (max - min + 1) + min;
        }
        printf("Saiu o número: %d", num);
        printf("\n");
        change(bingocard, N, num);
        count++;
        printf("\n");
        for(int i = 0; i<N; i++){
            for(int j = 0; j<N; j++){
                printf("%d      ", bingocard[i][j]);
            }
            printf("\n");
        }
        flag = bingo(bingocard, N, flag);
    }
    printf("\n");
    printf("======================================================================\n");
    printf("                             ＢＩＮＧＯ\n");
    printf("======================================================================\n");
    printf("\n");
    for(int i = 0; i<N; i++){
        for(int j = 0; j<N; j++){
            printf("%d      ", bingocard[i][j]);
        }
        printf("\n");
    }
    if(flag == 1){
        printf("Parabéns, completou o Bingo!\n");
        printf("Foram necessárias apenas %d jogadas\n", count);
    }
    return 0;
}