#include<iostream>
int maxcircular(int [],int);
int kadane(int [],int);
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int a[100],n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int finalAns;
    finalAns=maxcircular(a,n);
    cout<<finalAns<<endl;
}
return 0;
}
int maxcircular(int a[],int n){
int max_kadane;
max_kadane=kadane(a,n);
int max_wrap=0;
for(int i=0;i<n;i++){
    max_wrap=max_wrap+a[i];
    a[i]=-a[i];
}
max_wrap=max_wrap+kadane(a,n);
return(max_wrap>max_kadane?max_wrap:max_kadane);
}
int kadane(int a[],int n){
int max_starting=0;
int max_ending=0;
for(int i=0;i<n;i++){
    max_starting=max_starting+a[i];
    if(max_starting<0){
        max_starting=0;
    }
    if(max_starting>max_ending){
        max_ending=max_starting;
    }
}
return max_ending;
}
