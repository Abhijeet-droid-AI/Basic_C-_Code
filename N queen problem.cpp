#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int n;
int board[10][10]={0};//board of 10 x 10//


bool isSafe(int row, int col){
    for(int i; i<n; i++){//for checking the rows (i)//
        for(int j; j<n; j++){//for checking the columns//
            if(board[i][j]=1){//in case there is queen at that place initailize with 1//
                if(i==row || j==col || i-j==row-col || i+j==row+col){
                    return false;
                }
            }
        }
    }
    return true;    
}

void board_Display(){
    for(int i; i<n; i++){
        for(int j; j<n; j++){
            cout<<board[i][j]<< " ";//displaying of queens in case of better position found//
        }
    }
    cout << endl;
}

void place_Queen(int row){
    if(row==n){     //placement of queens using this variable
        board_Display();
        return;
    }
    for(int col; col < n; col++){
        //outputing the value for  col
        if(isSafe(row,col)){
            board[row][col]=1;
            place_Queen(row+1);// 
            board[row][col];

        }else{
            return true;
        }
        
    }

}


int main(){
    cin>>n;
    //place 'n' no. of queens on n x n board//

    place_Queen(0);//placing queen on the 0th position// 
    return 0;
}