#include<iostream>
#include<map>
using namespace std;
int search(map<int,int>&myMap,int n,int num){
     for(int i=0;i<num;i++){
         if(myMap[i]==n){
              return i;
         }
     }
}
int main(){
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    map<int,int>myMap;
    for(int i=0;i<n;i++){
         myMap[i]=a[i];
    }
    int t=n;
    int index=n-1;
    int num=n;
    for(int i=num-1;i>=0;i--){
         if(k==0){
             break;
         }
         if(myMap[num-i-1]==n){
              n--;
         }
         else{
              int index=search(myMap,n,t);
              myMap[index]=myMap[num-i-1];
              myMap[num-i-1]=n;
              k--;
              n--;
         }
    }
    for(auto node:myMap){
        cout<<node.second<<" ";
    }
}
