#include <iostream>
using namespace std;
bool subsetsum(int a[],int i, int sum,int n,int total){
    if(i>=n){
        if(total==sum)
            return true;
    }
     total+=a[i];
    subsetsum(a,i+1,sum,n,total);
    subsetsum(a,i+2,sum,n,total);

}
int main() {
    int n;
    cin>>n;
    int a[n];
    int total=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int sum;
    cin>>sum;
    int i=0;
    if(subsetsum(a,i,sum,n,total)){
        cout<<"Yes";
    }
    else{
        cout<<"No";
    }
    return 0;
}
