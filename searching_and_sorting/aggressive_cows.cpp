#include<iostream>
#include<algorithm>
#define ll long long int
using namespace std;
bool isValidConfig(ll stalls[],ll n,ll k,ll ans){
     int cows=1;
     ll distance=0;
     for(int i=0;i<n;i++){
         if(stalls[i]-distance>ans){
         distance=stalls[i];
         cows++;
         if(cows>k){
             return false;
         }
         }
         distance=stalls[i]-distance;
     }
     return true;
}
ll binarySearchdistance(ll stalls[],ll n,ll k){
    ll total_distance=0;
    ll s=0,e=0;
    for(int i=0;i<n;i++){
        total_distance+=stalls[i];
        s=min(s,stalls[i]);
    }
    e=total_distance;
    int finalAns=s;
    while(s<=e){
        ll mid=(s+e)/2;
        if(isValidConfig(stalls,n,k,mid)){
            ///true
            finalAns=mid;
            e=mid-1;
        }
        else{
            ///false
            s=mid+1;
        }
    }
    return finalAns;
}
int main(){
    int t;
    cin>>t;
    while(t--){
    ll n;
    ll k;
    cin>>n>>k;
    ll stalls[100005];
    for(int i=0;i<n;i++){
         cin>>stalls[i];
    }
    sort(stalls,stalls+n);
    cout<<binarySearchdistance(stalls,n,k)<<endl;
    }
}
