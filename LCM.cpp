#include<iostream>
using namespace std;
int lcm(int a,int b){
   if(b==0){
      return a;
    }
   return(lcm(b,a%b));
}
int main(){
    int a,b;
    cin>>a>>b;
    int c=a*b;
    int d=lcm(a,b);
    cout<<d<<endl;
    cout<<(c/d)<<endl;
    return 0;
}
