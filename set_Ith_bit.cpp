#include<iostream>
using namespace std;
int setIthbit(int n,int i){
    int mask=1<<i;
    n=n|mask;
    return n;
}
int main(){
   int n,i;
   cin>>n>>i;
   cout<<setIthbit(n,i)<<endl;
   return 0;
}
