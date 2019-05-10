#include<iostream>
using namespace std;
int main(){
    int a[]={7,3,4,2,7,8};
    int n=sizeof(a)/sizeof(int);
    ///go to every second element,try to create
    for(int i=0;i<n;i+=2){
        ///check for left element
        if(i>0 && a[i]<a[i-1]){
            swap(a[i],a[i-1]);
        }
        ///check for right element
        if(i<=n-2 && a[i]<a[i+1]){
             swap(a[i],a[i+1]);
        }
    }
    ///print the array
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
