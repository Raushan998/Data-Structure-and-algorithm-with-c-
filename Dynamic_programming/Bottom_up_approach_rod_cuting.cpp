#include<iostream>
using namespace std;
int maxprofit_bu(int arr[],int total_len){
    int dp[100]={};
    for(int len=1;len<=total_len;++len){
          int best=0;
          for(int cut=1;cut<=len;++cut){
               best=max(best,arr[cut]+dp[len-cut]);
          }
          dp[len]=best;
    }
    return dp[total_len];
}
int main(){
    int priceofEachLen[100];
    int total_len;
    cin>>total_len;
    for(int eachpiece=1;eachpiece<=total_len;++eachpiece){
         cin>>priceofEachLen[eachpiece];
    }
    int ans=maxprofit_bu(priceofEachLen,total_len);
    cout<<ans<<endl;
    return 0;
}
