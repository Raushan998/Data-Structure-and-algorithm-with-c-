
#include <iostream>
#include<stack>
#include<queue>
using namespace std;
class stackusingQueue{
     queue<int>*q1,*q2;
     public:
         stackusingQueue(){
             q1=new queue<int>();
             q2=new queue<int>();
         }
         void push(int x){
              q1->push(x);
         }
         void pop(){
             int n=q1->size();
             for(int i=0;i<n-1;++i){
                 q2->push(q1->front());
                 q1->pop();
             }
             q1->pop();
             swap(q1,q2);
         }
         int top(){
             int n=q1->size();
             for(int i=0;i<n-1;++i){
                 q2->push(q1->front());
                 q1->pop();
             }
             int topElement=q1->front();
             if(q1->empty()==false){
                 q2->push(q1->front());
                 q1->pop();
                 swap(q1,q2);
             }
             return topElement;
         }
         ~stackusingQueue(){
             delete q1;
             delete q2;
         }

};
int main() {
    stackusingQueue s;
    s.push(1);
    s.push(2);
    s.push(3);
    cout<<s.top();
    cout<<s.top();
    s.pop();
    cout<<s.top();
    return 0;
}
