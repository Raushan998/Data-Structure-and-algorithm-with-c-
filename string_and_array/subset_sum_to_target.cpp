#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[1000];
    int maximumSum=0;
    int currentSum=0;
    int cumSum[100]={0};
    cin>>maximumSum;
    cin>>a[0];
    cumSum[0]=a[0];
    for(int i=1;i<n;i++){
        cin>>a[i];
        cumSum[i]=cumSum[i-1]+a[i];
    }


    //Generate all subarrays
    int i=0;
    for(i=0;i<n;i++){
        int k=0;
        for(int j=i;j<n;j++){
            //Elements of subarray (i,j)
            currentSum=0;
            currentSum=cumSum[j]-cumSum[i-1];
            //update maximum sum if currentSum is greater than maximumSum
            if(currentSum==maximumSum){
                //maximumSum=currentSum;
                k=currentSum;
            }
        }
        if(k==maximumSum){
           cout<<"Yes";
           break;
        }

    }
    //cout<<"Maximum Sum is "<<maximumSum<<endl;
   if(i==n){
      cout<<"No"<<endl;
   }
    return 0;
}
