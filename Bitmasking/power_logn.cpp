#include<iostream>
using namespace std;
int main(){
    int t,p;
    cin>>t>>p;
    long long int ans=1;
    while(p>0){
        if(p&1){
            ans=ans*t;
        }
        t=t*t;
        p=p>>1;
    }
    cout<<ans;
    return 0;
}
