#include<iostream>
using namespace std;
void insertion_sort(int a[],int n){
 for(int i=1;i<n;i++){
     int j=i-1;
     int no=a[i];
     while(j>=0 && a[j]>no){
     a[j+1]=a[j];
     j--;
     }
     a[j+1]=no;
 }
}
void print(int a[],int n){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
int main(){
    int a[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];

    }
     insertion_sort(a,n);
     print (a,n);
     return 0;
}
