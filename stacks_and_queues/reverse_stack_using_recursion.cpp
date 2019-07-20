#include<iostream>
#include<stack>
using namespace std;
void insertAtBottom(stack<int>&s,int x){
      if(s.empty()){
           cout<<x<<endl;
           return;
      }
      int y=s.top();
      s.pop();
      insertAtBottom(s,x);
      s.push(y);
}
void reversestack(stack<int>&s){
     if(s.empty())return;
      int x=s.top();
      s.pop();
      reversestack(s);
      insertAtBottom(s,x);
      s.top();
}
int main(){
    stack<int>s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    reversestack(s);
    while(!s.empty()){
         cout<<s.top()<<" ";
         s.pop();
    }
    return 0;
}
