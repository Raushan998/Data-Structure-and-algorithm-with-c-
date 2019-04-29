#include<iostream>
#include<iostream>
#define ll long long int
using namespace std;
bool solve(ll mid,ll x,ll m,ll n,ll y){
    return(mid*x<=m+(n-mid)*y);
}
int binarysearch(ll n,ll m,ll x,ll y){
    ll s=0,e=n;
    ll ans=0,mid;
    while(s<=e){
        mid=(s+e)/2;
        if(solve(mid,x,m,n,y)){
            ans=mid;
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    return ans;
}
int main(){
   ll n,m,x,y;
   cin>>n>>m>>x>>y;
   ll p=binarysearch(n,m,x,y);
   cout<<p<<endl;
   return 0;
}
