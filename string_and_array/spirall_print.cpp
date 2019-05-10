#include<iostream>
using namespace std;
int init_matrix(int a[][10],int R,int C){
int value=1;
for(int i=0;i<R;i++){
        for (int j=0;j<C;j++){
               a[i][j]=value++;
        }

}
}
void print_matrix(int a[][10],int R,int C){
for(int i=0;i<R;i++){
        for (int j=0;j<C;j++){
              cout<<a[i][j]<<" ";
        }
        cout<<endl;

}
}
void spiral_print(int a[][10],int R,int C){
int startRow=0,endRow=R-1,startCol=0,endCol=C-1;
while(startRow<=endRow && startCol<=endCol){
    //print start row first
    for(int j=startCol;j<=endCol;j++){
        cout<<a[startRow][j]<<" ";
    }
    startRow++;
    //print endCOl
    for(int i=startRow;i<=endRow;i++){
        cout<<a[i][endCol]<<" ";
    }
    endCol--;
    //print endRow
    if(endRow>startRow){
        for(int j=endCol;j>=startCol;j--){
            cout<<a[endRow][j]<<" ";
        }
        endRow--;
    }
    //print startcol
    if(startCol<endCol){
        for(int i=endRow;i>=startRow;i--){
            cout<<a[i][startCol]<<" ";
        }
        startCol++;
    }
}
}
int main(){
int a[10][10];
int R,C;
cin>>R>>C;
init_matrix(a,R,C);
print_matrix(a,R,C);
//spiral print
spiral_print(a,R,C);
return 0;
}
