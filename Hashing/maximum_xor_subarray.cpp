#include<iostream>
#include<set>
#include<climits>
using namespace std;
int main(){
     int n;
     cin>>n;
     int a[n];
     for(int i=0;i<n;i++){
         cin>>a[i];
     }
     int j=0;
     int ans=INT_MIN;
     set<int>s;
     for(int i=0;i<n;i++){
          int curr_xor=0;
          while(j<n && s.find(a[j])==s.end()){
               curr_xor=curr_xor^a[j];
               j++;
          }
          j=i+1;
          if(ans<curr_xor){
               ans=curr_xor;
          }
          s.erase(a[i]);
     }
     cout<<ans<<endl;
     return 0;
}
