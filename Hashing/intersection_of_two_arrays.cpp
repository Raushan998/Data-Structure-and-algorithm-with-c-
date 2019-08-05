#include<iostream>
#include<map>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    map<int,int>myPair;
    for(int i=0;i<n;i++){
       myPair[a[i]]++;
    }
    for(int i=0;i<n;i++)
        myPair[b[i]]++;
    cout<<"[";
    for(auto node:myPair){
        if(node.second>1){
           for(int i=0;i<node.second/2;i++)
            cout<<node.first<<", ";
        }
    }
    cout<<"]";
}
