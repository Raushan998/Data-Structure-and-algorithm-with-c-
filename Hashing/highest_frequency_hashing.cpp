#include<iostream>
#include<unordered_map>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    unordered_map<int,int>maximum;
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        maximum[num]++;
    }
    int index=0,max_index=0,k;
    for(auto node:maximum){
         index=node.second;
         if(max_index<index){
              max_index=index;
              k=node.first;
         }
    }
    cout<<k<<endl;
}
