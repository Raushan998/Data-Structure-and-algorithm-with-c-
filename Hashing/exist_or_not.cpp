#include<iostream>
#include<map>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
         cin>>a[i];
    }
        map<int,bool>myPair;
        for(int i=0;i<n;i++){
            myPair[a[i]]=true;
        }
        int num;
        cin>>num;
        while(num--){
            int a;
            cin>>a;
            if(myPair.count(a)){
                cout<<"Yes"<<endl;
            }
            else{
                cout<<"No"<<endl;
            }
        }
    }
}
