#include<iostream>
using namespace std;
bool issafe(int board[][10],int i,int j,int n){
    for(int row=0;row<i;row++){
       if(board[row][j]==1){
          return false;
       }
    }
    int x=i;
    int y=j;
    while(x>=0 && y>=0){
        if(board[x][y]==1){
            return false;
        }
        x--;
        y--;
    }
     x=i;
     y=j;
    while(x>=0 && y<n){
        if(board[x][y]==1){
            return false;
        }
        x--;
        y++;
    }
    return true;
}
bool solveNqueen(int board[][10],int i,int n){
    ///Base case
    if(i==n){
        for(int i=0;i<n;i++){
             for(int j=0;j<n;j++){
            if(board[i][j]==1){
                cout<<"Q ";
            }
            else{
                cout<<"_ ";
            }
        }
        cout<<endl;
          }
          cout<<endl;
       ///we have successfully place queens in n rows
       ///print the board
       return false;
    }
    ///Recursive case
    ///try to place the queen in the current rows which will be solved by recursion
    for(int j=0;j<n;j++){
        if(issafe(board,i,j,n)){
            board[i][j]=1;
            bool nextqueen=solveNqueen(board,i+1,n);
            if(nextqueen){
                 return true;
            }
            board[i][j]=0;//Backtrack
        }
    }
    return false;
}
int main(){
   int n;
   cin>>n;
   int board[10][10]={0};
   solveNqueen(board,0,4);
}
