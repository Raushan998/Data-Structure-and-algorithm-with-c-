#include<iostream>
#include<climits>
using namespace std;
int minprofit(int n,int arr[],int k){
    if(n>=k || n<1){
        return 0;
    }
    int q1=INT_MAX,q2=INT_MAX,q3=INT_MAX;
    if(n*2<=k)q1=arr[0]+minprofit(n*2,arr,k);
    if(n+1<=k)q2=arr[1]+minprofit(n+1,arr,k);
    if(n-1<=k)q3=arr[2]+minprofit(n-1,arr,k);
    int max1=min(q1,min(q2,q3));
    return max1;
}
int main(){
    int n=1;
    int k;
    cin>>k;
    int a[3];
    for(int i=0;i<3;i++){
        cin>>a[i];
    }
    int ans=minprofit(n,a,k);
    cout<<ans<<endl;
    return 0;
}
