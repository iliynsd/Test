//
// Created by Admin on 02.12.2020.
//

#ifndef UNTITLED3_IO_H
#define UNTITLED3_IO_H

#include <iostream>
using namespace std;
void PrintBoard(char board[][3],int size)
{
for (int i = 0; i < size ; ++i) {
for (int j = 0; j < size; ++j) {
cout <<board[i][j]<<" | ";
}
cout<<endl<<" ---------"<< endl;
}
}
int InputCoordinate()
{
    int coordinate;
    do
    {
        cout<<"Enter coordinate from 0 to 2";
        cin>>coordinate;
    }while(!Check(coordinate));
    return coordinate;
}

#endif //UNTITLED3_IO_H
