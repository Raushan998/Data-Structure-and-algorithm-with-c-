#include<iostream>
using namespace std;
int main(){
    char a[50];
    cin>>a;
    int i=0;
    if(a[i]==9){
        i+=1;
        //iterating for next digits
        for(int i=1;a[i]!='\0';i++){
             int digit=a[i]-'0';//converting char int into a int digit
             if(digit>=5){
                 digit=9-digit;
                 a[i]=digit+'0';
             }
        }
        cout<<a<<endl;
    }
    else{
         for(int i=0;a[i]!='\0';i++){
             int digit=a[i]-'0';//converting char int into a int digit
             if(digit>=5){
                 digit=9-digit;
                 a[i]=digit+'0';
             }
        }
        cout<<a<<endl;

    }
    return 0;
}