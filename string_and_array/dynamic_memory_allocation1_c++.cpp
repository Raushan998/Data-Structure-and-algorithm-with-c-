#include<iostream>
using namespace std;
int main(){
    int *p=new int(30);
    cout<<*p<<endl;
    int *q;
    cout<<*q<<endl;
    //Initialisation of arrays
    int *arr=new int [30];
    for(int i=0;i<30;i++){
        arr[i]=i;
    }
    for(int i=0;i<30;i++){
        cout<<arr[i]<<" ";
    }
    delete p;//to delete the variable
    delete [] arr;
    cout<<"Array has been deleted"<<endl;
    cout<<arr[0];
    return 0;
}
