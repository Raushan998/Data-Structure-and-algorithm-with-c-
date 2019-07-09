#include<iostream>
using namespace std;
void printArray(int *a,int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<",";
    }
    cout<<endl;
}
int *createArray(){
    ///static Allocation
    int a[]={1,2,3,4,5};
    printArray(a,5);
    cout<<a<<endl;
    return a;
}
int main(){
int *b=createArray();
cout<<b<<endl;
return 0;
}
