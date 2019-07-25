#include<iostream>
#include<stack>
using namespace std;
class queueusingstack{
      stack<int>q1,q2;
      public:
           queueusingstack(){

           }
           void push(int n){
                 for(int i=0;i<n;i++){
                       q1.push(i);
                 }
                 for(int i=0;i<n;i++){
                     q2.push(q1.top());
                     q1.pop();
                 }
           }
           void top(){
                     cout<<q2.top()<<" ";
                     q2.pop();
           }
};
int main(){
    queueusingstack s;
    int num;
    cin>>num;
    s.push(num);
    for(int i=0;i<num;i++){
        s.top();
    }
    return 0;
}
