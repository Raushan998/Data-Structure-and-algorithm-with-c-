#include<iostream>
using namespace std;
int binarySearch(int *a,int i,int n,int key,int k){
    int mid=(i+n)/2;
    if(i<0 || n>k-1){
        return -1;
    }
    if (a[mid]==key)
        return mid;
    if(key>a[mid])
        return binarySearch(a,mid+1,n,key,k);
    if(key<a[mid])
        return binarySearch(a,i,mid-1,key,k);
}
int main(){
    int a[]={1,2,3,5,6};
    int n=sizeof(a)/sizeof(int);
    int k=sizeof(a)/sizeof(int);
    int key=-1;
    cout<<binarySearch(a,0,n,key,k)<<endl;
    return 0;
}
