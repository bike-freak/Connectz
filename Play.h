#include<bits/stdc++.h>
#include<windows.h>

#include"Board.h"
#include"Check.h"
using namespace std;

int playGame(char board[6][7]){
    int column;
    int player=1;
    int row[7]={0,0,0,0,0,0,0};
    //assignRow(row);
    while(isNotFull(board)){
        system("CLS");
        displayBoard(board);
        cout<<"Player "<<player<<", enter the column number you want to insert, or 0 to resign: ";
        cin>>column;
        if(column==0){
            cout<<"Player "<<player<<" resigns.\n";
            return player==1?2:1;
        }
        else if(column>7){
            cout<<"Enter a valid column\n";
            Sleep(3000);
            player=player==1?2:1;
        }
        else if(row[column-1]<6){
            board[row[column-1]][column-1]= player==1?'#':'$';
            //cout<<board[row[column-1]][column-1];
            row[column-1]++;
            int win=checkWin(board);
            if(win){
                system("CLS");
                displayBoard(board);
                return win;
            }
        }else{
            cout<<"Enter a column which isnt full\n";
            Sleep(3000);
            //system("CLS");
            player=player==1?2:1;
        }
        player=player==1?2:1;
    }
    return 0;
}