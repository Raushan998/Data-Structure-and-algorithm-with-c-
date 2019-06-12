#include<iostream>
using namespace std;
int tiling(int n){
    if(n<0){
        return 0;
    }
    if(n==1){
        return 1;
    }
    if(n==4){
        return 2;
    }
    return(tiling(n-1)+tiling(n-4));
}
int main(){
    int n=1;
    while(n!=20){
    int t=tiling(n);
    cout<<"n="<<n<<" "<<t<<" "<<endl;
    n+=1;
    }
    return 0;
}
