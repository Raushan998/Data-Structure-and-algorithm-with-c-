#include<iostream>
using namespace std;
int last_occurence(int a[],int n,int key){
     int s=0;
     int e=n-1;
     int ans;
     int mid;
     while(s<=e){
          mid=(s+e)/2;
          if(a[mid]==key){
              s=mid+1;
              ans=mid;
          }
          else if(a[mid]>key){
              e=mid-1;
          }
          else
              s=mid+1;
     }
     return ans;
}
int main(){
    int a[]={1,2,2,2,2,2,2,4,4,7,8,8,3};
    int n=sizeof(a)/sizeof(int);
    int key;
    cin>>key;
    int ans=last_occurence(a,n,key);
    cout<<"last occurence of "<<key<<" is "<<ans;
    return 0;
}
