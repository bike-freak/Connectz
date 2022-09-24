#include<bits/stdc++.h>

using namespace std;

void assignBoard(char board[6][7]){
    for(int i=0;i<6;i++){
        for(int j=0;j<7;j++){
            board[i][j]='.';
        }
    }
}

void assignRow(int *row){
    for(int i=0;i<7;i++){
        row[i]=0;
    }
}

void displayBoard(char board[6][7]){
    for(int i=5;i>=0;i--){
        cout<<"|";
        for(int j=0;j<7;j++){
            cout<<board[i][j]<<"|";
        }
        cout<<"\n";
    }
    cout<<"+-------------+\n";
    cout<<" 1 2 3 4 5 6 7\n";
}