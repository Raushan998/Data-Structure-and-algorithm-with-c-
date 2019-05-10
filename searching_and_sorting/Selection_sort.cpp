#include<iostream>
using namespace std;
void selectionsort(int arr[],int n){
 for(int k=0;k<n-1;k++){
       int j;
       int minIndex=k;
       for(j=k+1;j<n;j++){
           if(arr[j]<arr[minIndex])
               minIndex=j;
       }
       swap(arr[k],arr[minIndex]);
   }
}
int main(){
   int arr[100];
   int n;
   cout<<"Enter the number to be sorted:"<<endl;
   cin>>n;
   for(int i=0;i<n;i++){
       cin>>arr[i];
   }

  selectionsort(arr,n);
   for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
   }
   return 0;
}
