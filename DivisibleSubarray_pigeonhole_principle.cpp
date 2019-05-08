#include<iostream>
#include<cstring>
using namespace std;
#define ll long long
ll a[1000005],prefixsum[10000005];
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        ll sum=0;
        memset(prefixsum,0,sizeof(prefixsum));
        prefixsum[0]=1;
        for(int i=0;i<n;i++){
           cin>>a[i];
           sum+=a[i];
           sum%=n;
           sum=(sum+n)%n;
           ///first make the number positive
           ///update the frequency
           prefixsum[sum]++;
        }
        ll ans=0;
        for(int i=0;i<n;i++){
           cout<<prefixsum[i]<<" ";
            ll no=prefixsum[i];
            ans+=((no)*(no-1))/2;
        }
        cout<<ans<<endl;

    }
    return 0;

}
