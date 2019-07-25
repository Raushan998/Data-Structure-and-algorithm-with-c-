#include<iostream>
#include<queue>
using namespace std;
int main(){
     queue<int>q;
     int n;
     cin>>n;
     int num;
     for(int i=1;i<n;i++){
         cin>>num;
         q.push(num);
     }
     while(!q.empty()){
         cout<<q.front()<<endl;
         q.pop();
     }
     cout<<"-1"<<endl;
     return 0;
}
