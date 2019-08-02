#include<bits/stdc++.h>
using namespace std;
class car{
     public:
         int x;
         int y;
         int id;
         car(int id,int x,int y){
              this->id=id;
              this->x=x;
              this->y=y;
         }
         int dist(){
              return(x*x+y*y);
         }
         void print(){
              cout<<"ID: "<<id;
              cout<<" Location: "<<x<<" , "<<y<<endl;
         }
};
///Functor-Functional object
class carcompare{
    public:
        ///Method to overload () operator
        bool operator()(car a,car b){
             return a.dist()<b.dist();
        }
};
int main(){
      priority_queue<car,vector<car>,carcompare>pq;
      int x[10]={5,6,17,18,9,11,0,3};
      int y[10]={1,-2,8,9,10,91,1,2};
      ///insert these in q
      for(int i=0;i<8;i++){
           car c(i,x[i],y[i]);
           pq.push(c);
      }
      ///Heap-max
      while(!pq.empty()){
            car p=pq.top();
            p.print();
            pq.pop();
      }
      return 0;
}
