#include<iostream>
using namespace std;
int findUniqueNo(int *a,int n){
    int cnt[64]={0};
    for(int j=0;j<n;j++){
    ///Extract bits of every number & update the count array
    int i=0;
    int no=a[j];
    while(no>0){
        cnt[i]+=(no&1);
        i++;
        no=no>>1;
       }
    }
    ///take the mod of cnt array with 3
    int p=1;
    int ans=0;
    for(int i=0;i<64;i++){
        cnt[i]%=3;
        cout<<cnt[i]<<endl;
        ans+=cnt[i]*p;
        p=p<<1;
    }
    return ans;
}
int main(){
   int n;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++){
       cin>>a[i];
   }
   cout<<findUniqueNo(a,n);
   return 0;
}
