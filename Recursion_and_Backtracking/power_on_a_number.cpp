#include <algorithm>
#include <chrono>
#include <iostream>
using namespace std;
using namespace std::chrono;
int pow(int a,int b){
    if(b==1){
        return a;
    }
    else{
         return (a*pow(a,b-1));
    }
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<pow(a,b)<<endl;
    return 0;
}
