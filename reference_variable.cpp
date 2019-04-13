#include<iostream>
using namespace std;
void update(int &z){
    z++;
}
int main(){
    int x=10;
    int &y=x;
    y=y+1;
    cout<<x<<endl;
    cout<<y<<endl;
    update(x);
    update(y);
    cout<<x<<endl;
    cout<<y<<endl;    
}