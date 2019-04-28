#include<iostream>
#include<cmath>
using namespace std;
int root(long long int num,long long int pow1){
    long long int s=0,e=num;
    long long int mid,ans=0;

    while(s<=e){
        mid=(s+e)/2;
        if(pow(mid,pow1)<=num){
            ans=mid;
        }
        if(pow(mid,pow1<=num){
            s=mid+1;
        }
        else{
             e=mid-1;
        }
    }
    return ans;
}
int main(){
    long long int num,pow1;
    int t;
    cin>>t;
    while(t--){

       cin>>num>>pow1;
        if(num<=1000000000000000 && pow1<=10000){
       cout<<root(num,pow1)<<endl;
       }
    }
     return 0;
}


