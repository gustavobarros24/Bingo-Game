#include <stdio.h>
#include <stdlib.h>

int bingo(int bingocard[5][5], int N, int flag){
    if(bingocard[0][0] == 0 && bingocard[1][1] == 0 && bingocard[2][2] == 0 && bingocard[3][3] == 0 && bingocard[4][4] == 0){
        flag = 1;
    }
    if(bingocard[0][4] == 0 && bingocard[1][3] == 0 && bingocard[2][2] == 0 && bingocard[3][1] == 0 && bingocard[4][0] == 0){
        flag = 1;
    }
    if(bingocard[1][0] == 0 && bingocard[1][1] == 0 && bingocard[1][2] == 0 && bingocard[1][3] == 0 && bingocard[1][4] == 0){
        flag = 1;
    }
    if(bingocard[2][0] == 0 && bingocard[2][1] == 0 && bingocard[2][2] == 0 && bingocard[2][3] == 0 && bingocard[2][4] == 0){
        flag = 1;
    }
    if(bingocard[3][0] == 0 && bingocard[3][1] == 0 && bingocard[3][2] == 0 && bingocard[3][3] == 0 && bingocard[3][4] == 0){
        flag = 1;
    }
    if(bingocard[4][0] == 0 && bingocard[4][1] == 0 && bingocard[4][2] == 0 && bingocard[4][3] == 0 && bingocard[4][4] == 0){
        flag = 1;
    }
    if(bingocard[0][0] == 0 && bingocard[0][1] == 0 && bingocard[0][2] == 0 && bingocard[0][3] == 0 && bingocard[0][4] == 0){
        flag = 1;
    }
    if(bingocard[0][1] == 0 && bingocard[1][1] == 0 && bingocard[2][1] == 0 && bingocard[3][1] == 0 && bingocard[4][1] == 0){
        flag = 1;
    }
    if(bingocard[0][2] == 0 && bingocard[1][2] == 0 && bingocard[2][2] == 0 && bingocard[3][2] == 0 && bingocard[4][2] == 0){
        flag = 1;
    }
    if(bingocard[0][3] == 0 && bingocard[1][3] == 0 && bingocard[2][3] == 0 && bingocard[3][3] == 0 && bingocard[4][3] == 0){
        flag = 1;
    }
    if(bingocard[0][4] == 0 && bingocard[1][4] == 0 && bingocard[2][4] == 0 && bingocard[3][4] == 0 && bingocard[4][4] == 0){
        flag = 1;
    }
    if(bingocard[0][0] == 0 && bingocard[1][0] == 0 && bingocard[2][0] == 0 && bingocard[3][0] == 0 && bingocard[4][0] == 0){
        flag = 1;
    }
    return flag;
}