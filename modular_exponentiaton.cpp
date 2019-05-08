#include<iostream>
using namespace std;
int main(){
    int t,p,m;
    cin>>t>>p>>m;
    long long int ans=1;
    while(p>0){
        if(p&1){
            ans=ans*t;
        }
        t=t*t;
        p=p>>1;
    }
    cout<<ans%m<<endl;
    return 0;
}
