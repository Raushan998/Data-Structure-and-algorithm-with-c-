#include<iostream>
using namespace std;
bool isprime(long long int no){
    if(no==1 || no==0){
        return false;
    }
    for(int i=2;i*i<no;i++){
        if(no%i==0)
            return false;
    }
    return true;
}
int main(){
   long long int n;
   cin>>n;
   if(isprime(n)){
       cout<<"yes "<<n<<" is prime";
   }
   else{
        cout<<"No "<<n<<" is not prime";
   }
   return 0;
}
