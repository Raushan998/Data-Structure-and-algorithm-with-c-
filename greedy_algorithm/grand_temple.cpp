#include<iostream>
#include<algorithm>
#include<vector>
#include<climits>>
using namespace std;
int main(){
    vector<int>x,y;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
         int x1,y1;
         cin>>x1>>y1;
         x.push_back(x1);
         y.push_back(y1);
    }
    sort(x.begin(),x.end());
    sort(y.begin(),y.end());
    int maxdif_x=INT_MIN;
    int maxdif_y=INT_MIN;
    for(int i=0;i<n-1;i++){
          if((abs(x[i]-x[i+1])-1)>maxdif_x)
             maxdif_x=abs(x[i]-x[i+1])-1;
           if((abs(y[i]-y[i+1])-1)>maxdif_y)
             maxdif_y=abs(y[i]-y[i+1])-1;
    }
    cout<<(maxdif_x*maxdif_y)<<endl;
}
