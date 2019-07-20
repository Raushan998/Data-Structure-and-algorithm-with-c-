#include<iostream>
#include<vector>
using namespace std;
///Implementation of stack data
class stack{
    private:
         vector<int>v;
    public:
         void push(int data){
            v.push_back(data);
         }
         bool empty(){
             return v.size()==0;
         }
         void pop(){
             if(!empty()){
                  v.pop_back();
             }
         }
         int top(){
              return v[v.size()-1];
         }
};
int main(){
    stack s;
    for(int i=1;i<=5;i++){
         s.push(i*i);
    }
    ///try to print content of the stac by popping each element
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();
    }
    return 0;
}
