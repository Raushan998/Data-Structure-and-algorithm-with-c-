#include<iostream>
using namespace std;
int getIthbit(int n,int i){
   return((n&(1<<i))!=0?1:0);
}

int main(){
   int n,i;
   cin>>n>>i;
   cout<<getIthbit(n,i);
   return 0;
}
