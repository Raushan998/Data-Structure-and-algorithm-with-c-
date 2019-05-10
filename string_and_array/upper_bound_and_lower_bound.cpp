#include<iostream>
using namespace std;
int first_occurence(int a[],int n,int key){
    int ans=-1;
    int s=0;
    int e=n-1;
    while(s<=e){
         int mid=(s+e)/2;
         if(a[mid]==key){
              e=mid-1;
              ans=mid;
         }
         else if(a[mid]>key)
               e=mid-1;
        else{
              s=mid+1;
        }
    }
    return ans;
}
int last_occurence(int a[],int n,int key){
    int ans=-1;
    int s=0;
    int e=n-1;
    while(s<=e){
         int mid=(s+e)/2;
         if(a[mid]==key){
              s=mid+1;
              ans=mid;
         }
         else if(a[mid]>key)
               e=mid-1;
        else{
              s=mid+1;
        }
    }
    return ans;
}
int main(){
   int n;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++){
      cin>>a[i];
   }
   int t;
   cin>>t;
   while(t--){
   int key;
   cin>>key;
   int ans=last_occurence(a,n,key);
   int ans1=first_occurence(a,n,key);
   cout<<ans1<<" "<<ans<<endl;
   }
   return 0;
}
