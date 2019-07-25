#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int>q;
    int n;
    cin>>n;
    int num;
    int cost;
    for(int i=0;i<n;i++){
        cin>>num;
        if(num==2){
            cin>>cost;
            q.push(cost);
        }
        if(num==1){
            if(!q.empty()){
               cout<<q.top()<<endl;
               q.pop();
            }
            else{
                cout<<"No Code"<<endl;
            }

        }
    }
    return 0;
}