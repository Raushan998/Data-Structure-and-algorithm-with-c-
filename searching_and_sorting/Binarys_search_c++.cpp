#include<iostream>
using namespace std;
int binary_search1(int a[],int  n,int key){
     int s=0,e=n-1;
     int mid;
     while(s<=e){
         mid=(s+e)/2;
         if(a[mid]==key){
             ///found
             return mid;
         }
         ///key might be present at left half
         else if(a[mid]>key){
               e=mid-1;
         }
         else{
              s=mid+1;
         }
     }
     return -1;
}
int main(){
 int a[]={1,3,5,10,12,15,17};
 int n=sizeof(a)/sizeof(int);
 int key;
 cin>>key;
 int searchIndex=binary_search1(a,n,key);
 if(searchIndex==-1){
       cout<<key<<" is not present."<<endl;
 }
 else{
       cout<<key<<" is present at "<<searchIndex<<endl;
 }
 return 0;
}
