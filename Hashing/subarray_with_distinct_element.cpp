#include<bits/stdc++.h>
using namespace std;
int main(){
     int n;
     cin>>n;
     int a[n];
     for(int i=0;i<n;i++){
         cin>>a[i];
     }
     set<int>mp;
     int j=0;
     int ans=0;
     for(int i=0;i<n;i++){
         while(j<n && mp.find(a[j])==mp.end()){
              mp.insert(a[j]);
              j++;
         }
         ans+=((j-i)*(j-i+1))/2;
         //cout<<j<<endl;
         mp.erase(a[i]);
     }
     cout<<ans<<endl;
     return 0;
}
