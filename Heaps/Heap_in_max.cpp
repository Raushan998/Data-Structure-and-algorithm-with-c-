#include<bits/stdc++.h>
using namespace std;
int main(){
      priority_queue<int>pq;
      int a[10]={5,6,17,18,9,11};
      ///Insert these in q
      for(int i=0;i<6;i++){
            pq.push(a[i]);
      }
      ///Heap max
      while(!pq.empty()){
           cout<<pq.top()<<", ";
           pq.pop();
      }
      return 0;
}
