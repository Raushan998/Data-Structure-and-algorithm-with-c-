#include<iostream>
#include<stack>
using namespace std;
void printspan(int arr[],int n){
    stack<int>s;
    int ans[100]={};
    for(int day=0;day<n;day++){
        int currprice=arr[day];
        while(s.empty()==false && arr[s.top()]<currprice){
            s.pop();
        }
       // cout<<s.top()<<endl;
        int betterDay=s.empty()?0:s.top();
        cout<<betterDay<<endl;
        int span=day-betterDay;
        ans[day]=span;
        s.push(day);
    }
    for(int i=0;i<n;++i){
        cout<<ans[i]<<" ";
    }
}
int main(){
    int n=7;
    int arr[100]={100,80,60,70,60,75,85};
    printspan(arr,n);
    return 0;
}