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
int main(){
   int a[]={1,2,2,2,2,3,3,4,4,6};
   int n=sizeof(a)/sizeof(int);
   int key;
   cin>>key;
   int ans=first_occurence(a,n,key);
   cout<<"first occurence of "<<key<<" is "<<ans<<endl;
   return 0;
}
