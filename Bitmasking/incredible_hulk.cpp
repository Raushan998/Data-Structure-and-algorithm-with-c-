#include<iostream>
using namespace std;
int main(){
int t;
cin>>t;
while(t--){
    int num;
    cin>>num;
    int count1=0;
    while(num>0){
        count1+=(num&1);
        num=num>>1;
    }
    cout<<count1<<endl;
}
return 0;
}
