#include<bits/stdc++.h>

using namespace std;

bool isNotFull(char board[6][7]){
    for(int i=5;i>=0;i--){
        for(int j=0;j<7;j++){
            if(board[i][j]=='.'){
                return true;
            }
        }
    }
    return false;
}

bool vertical(char board[6][7],char player,int i,int j){
    if(i<3){
        for(int x=i+1;x<i+4;x++){
            if(board[x][j]!=player){
                return false;
            }
        }
        return true;
    }
    return false;
}

bool horizontal(char board[6][7],char player,int i,int j){
    if(j<4){
        for(int x=j+1;x<j+4;x++){
            if(board[i][x]!=player){
                return false;
            }
        }
        return true;
    }
    return false;
}

bool leftDiagonal(char board[6][7],char player,int i,int j){
    if(j>2 && i<3){
        for(int x=0;x<4;x++){
            if(board[i++][j--]!=player){
                return false;
            }
        }
        return true;
    }
    return false;
}

bool rightDiagonal(char board[6][7],char player,int i,int j){
    if(j<4&&i<3){
        for(int x=0;x<4;x++){
            if(board[i++][j++]!=player){
                return false;
            }
        }
        return true;
    }
    return false;
}

int checkWin(char board[6][7]){
    for(int i=0;i<6;i++){
        for(int j=0;j<7;j++){
            if(board[i][j]!='.'){
                if(vertical(board,board[i][j],i,j) || horizontal(board,board[i][j],i,j) || leftDiagonal(board,board[i][j],i,j) || rightDiagonal(board,board[i][j],i,j)){
                    return board[i][j]=='#'?1:2;
                }
            }
        }
    }
    return 0;
}