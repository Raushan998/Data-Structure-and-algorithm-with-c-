#include<iostream>
using namespace std;
void swap1(int *y,int *x){
    int temp=*x;
    *x=*y;
    *y=temp;
}
void bubblesort(int arr[],int n){
    for(int i=0;i<=n-1;i++){
        for(int j=0;j<=n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap1(&arr[j],&arr[j+1]);
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
  int arr[10000000];
  int n;
  cin>>n;
  for(int i=0;i<n;i++){
      cin>>arr[i];
  }
  bubblesort(arr,n);
  return 0;
}
