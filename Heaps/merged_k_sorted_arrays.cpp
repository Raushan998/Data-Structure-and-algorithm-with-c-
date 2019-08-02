#include<bits/stdc++.h>
using namespace std;
int main(){
     priority_queue<int,vector<int>,greater<int>>pq;
     int a[]={0,4,10,12};
     int b[]={1,3,5,7};
     int c[]={2,4,12,15,20};
     int arr[100];
     int m=0;
     pq.push(a[0]);
     pq.push(b[0]);
     pq.push(c[0]);

     while(pq.top()!=INT_MAX){
          int i=1;
          if(i==sizeof(a[0])/sizeof(int) || i==sizeof(b[0])/sizeof(int) || i==sizeof(c[0])/sizeof(int)){
               pq.push(INT_MAX);
          }
          arr[m]=pq.top();
          pq.pop();
          arr[m+1]=pq.top();
          pq.pop();
          arr[m+2]=pq.top();
          pq.pop();
          pq.push(a[i]);
          pq.push(b[i]);
          pq.push(c[i]);
          m+=3;
          i+=1;
     }
    for(int i=0;i<12;i++){
          cout<<arr[i]<<" ";
     }
     return 0;
}
