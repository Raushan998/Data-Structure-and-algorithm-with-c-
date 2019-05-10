#include<iostream>
using namespace std;
int isvalid(int a[],int n,int mid,int k){
     int p=1;
     int sum=0;
     for(int i=0;i<n;i++){
         if((sum+a[i])>mid){
             sum=a[i];
             p+=1;
             if(p>k){
                 return false;
             }
         }

     }
     return true;
}
int main(){
    int N,K,T;
    cin>>N>>K>>T;
    int a[N];
    for(int i=0;i<N;i++){
        cin>>a[i];
    }
    int s=0,e=a[N-1],ans;
    while(s<=e){
        int mid=(s+e)/2;
        if(isvalid(a,N,mid,K)){
             ans=mid;
             s=mid+1;
        }
        else{
           e=mid-1;
        }
    }
    cout<<(ans*T);
}
