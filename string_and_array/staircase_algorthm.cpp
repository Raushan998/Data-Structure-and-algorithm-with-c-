#include<iostream>
using namespace std;
void init_matrix(int a[][10],int R,int C){
    int value=1;
    for(int i=0;i<R;i++){
        for(int j=0;j<C;j++){
            a[i][j]=value++;
        }
    }
}
void print_matrix(int a[][10],int R,int C){
for(int i=0;i<R;i++){
    for(int j=0;j<C;j++){
        cout<<a[i][j]<<" ";
    }
    cout<<endl;
}
}
void staircasesearch(int a[],R,C){
for(int i=0;)
}
int main(){
int a[10][10];
int R,C;
cin>>R>>C;
//Read the matrix
init_matrix(a,R,C);
//print the matrix
print_matrix(a,R,C);
//print the matrix in  wave form
}
