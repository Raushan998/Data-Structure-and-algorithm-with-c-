#include<iostream>
using namespace std;
int main(){
    int x=10;
    int y1=20;
    cout<<&x<<endl;
    float y=10.5;
    cout<<&y<<endl;
    //It doesnot work for character variable
    char ch='A';
    //Explicit type cast from char* to void*
    cout<<(void *)&ch<<endl;
    //pointers
    int *xptr;
    xptr=&x;//store the address of the variable.
    cout<<xptr<<endl;
    //Re-assign the another address to the variable.
    xptr=&y1;
    cout<<&y1<<endl;
    cout<<xptr<<endl;
    return 0;
}