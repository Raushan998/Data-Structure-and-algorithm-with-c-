#include<iostream>
using namespace std;
void clearBit(int &n,int i){
int mask=~(1<<i);
n=n&mask;
cout<<n;
}
int main(){
    int n,i;
    cin>>n>>i;
    clearBit(n,i);
    return 0;
}
