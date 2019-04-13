#include<iostream>
using namespace std;
int main(){
int **arr=new int *[3];//createing a primary array in the heap area
for(int i=0;i<3;i++){
    arr[i]=new int [4];//created a secondary array
}
int counter=0;
for(int i=0;i<3;i++){
    for(int j=0;j<4;j++){
        arr[i][j]=counter;
        counter+=1;
    }
}
for(int i=0;i<3;i++){
    for(int j=0;j<4;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<"\n";
}
for(int i=0;i<3;i++){
    delete [] arr[i];
}
delete [] arr;
return 0;

}
