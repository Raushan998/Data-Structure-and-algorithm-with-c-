#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int left[100],right[100],arr[100];
        int sum=0,n;
        cin>>n;

        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        left[0]=arr[0];
        right[(n-1)]=arr[n-1];
        for(int i=1;i<n;i++){
            left[i]=max(left[i-1],arr[i]);


        }
        for(int i=0;i<n;i++){
         right[(n-1)-i]=max(right[(n-1)-i+1],arr[(n-1)-i]);
        }
        for(int i=0;i<n;i++){
            cout<<left[i]<<" ";
        }
        cout<<endl;
        for(int i=0;i<n;i++){
            cout<<right[i]<<" ";
        }
        for(int i=0;i<n;i++){
            sum+=min(left[i],right[i])-arr[i];
        }
        cout<<sum<<endl;



    }
    return 0;
}
