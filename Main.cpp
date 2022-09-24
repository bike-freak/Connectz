#include<bits/stdc++.h>
#include<windows.h>
#include"Play.h"

using namespace std;
int main(){
    char board[6][7];
    int option,result;

    start:
    cout<<"1. Start game\n2. Exit\n";
    cin>>option;

    assignBoard(board);
    switch(option){
        case 1: result=playGame(board);
                break;
        case 2: exit(0);

        default: cout<<"Enter 1 or 2:\n";
        Sleep(5000);
        system("CLS");
        goto start;
    }

    if(result==0){
        cout<<"GAME DRAWN\n";
    }else if(result==1){
        cout<<"Player 1 WON\n";
    }else{
        cout<<"Player 2 WON\n";
    }
    
    cout<<"Press any key to continue.";
    char a;
    a=getchar();
    a=getchar();
    system("CLS");
    goto start;
    return 0;
}