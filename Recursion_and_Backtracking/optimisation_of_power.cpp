#include<iostream>
#define ll long long int
using namespace std;
int fastpower(ll a,ll b){

    if(b==0){
        return 1;
    }
    int smallAns=fastpower(a,b/2);
    cout<<smallAns<<" and "<<b<<endl;
    smallAns*=smallAns;

    if(b&1){
        return a*smallAns;
    }
    return smallAns;
}
int main(){
    ll a,b;
    cin>>a>>b;
    cout<<fastpower(a,b)<<endl;
    return 0;
}
