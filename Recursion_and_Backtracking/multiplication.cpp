#include<iostream>
using namespace std;
int multiply(int a,int b){
    if(b==0){
        return 0;
    }
    else{
         return (a+multiply(a,b-1));
    }
}
int main(){
   int a,b;
   cin>>a>>b;
   if((a>0 && b>0) || (a<0 && b<0)){
       if(a<0 && b<0){
           cout<<multiply(-a,-b)<<endl;
       }
       else
           cout<<multiply(a,b)<<endl;
   }
   else{
       if(a<0 && b>0){
           cout<<-multiply(-a,b)<<endl;
       }
       else{
           cout<<-multiply(a,-b)<<endl;
       }
   }
   return 0;
}
