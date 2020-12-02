#include <iostream>
#include "Game.h"
#include "IO.h"
using namespace std;
int main() {
    const  int Size=3;
    int row,col;
    char mas[Size][Size]={
            {' ',' ',' '},
            {' ',' ',' '},
            {' ',' ',' '}};
    bool winX, win0, draw;
    do{
        cout<<" !!! X !!!"<<endl;

        do {

            row= InputCoordinate();
            col= InputCoordinate();
        }while(mas[row][col] !=' ');
        mas[row][col]='X';
        PrintBoard(mas,Size);
        winX = WinX(mas);
        if (winX) break;
        cout<<"!!! 0 !!!";
        do {
            row= InputCoordinate();
            col= InputCoordinate();
        }while(mas[row][col] !=' ');
        mas[row][col]='0';
        PrintBoard(mas,Size);
        win0 = Win0(mas);
        if (win0) break;
        draw = Draw(mas,Size);

    }while( !draw);
    if (winX)
    { cout<<" X won"<<endl;}
    else  if (win0) {
        cout<<" 0 won"<<endl;}
    else
    { cout<< " Draw"<<endl;}
}


