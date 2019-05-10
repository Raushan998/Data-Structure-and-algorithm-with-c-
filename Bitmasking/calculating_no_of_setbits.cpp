#include<iostream>
using namespace std;
int countBitsFast(int n){
   int count1=0;
   while(n>0){
       count1+=(n&1);
       n=n>>1;
   }
   cout<<count1;
   return 0;
}
int main(){
   int n;
   cin>>n;
   countBitsFast(n);
   return 0;
}
