#include<iostream>
using namespace std;
void bubblesort(int a[],int j,int n){
     if(n==1)
         return;
     if(j==n-1)
         return bubblesort(a,0,n-1);
     if(a[j]>a[j+1])
         swap(a[j],a[j+1]);
     bubblesort(a,j+1,n);
     return;
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    bubblesort(a,0,n);
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    return 0;
}
