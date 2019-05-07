#include<iostream>
using namespace std;
int gcd(int a,int b){
    if(b==0){
        return (a);
    }
    return (gcd(b,a%b));
}
int main(){
   cout<<gcd(4,6)<<endl;
   cout<<gcd(10,15)<<endl;
   return 0;
}
