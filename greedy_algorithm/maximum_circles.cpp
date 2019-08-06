#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
struct cmpr{
    bool operator()(pair<int,int>a,pair<int,int>b){
         if(a.second==b.second)return a.first<b.first;
         return a.second<b.second;
    }
}cmp;
int main(){
    int n;
    cin>>n;
    vector<pair<int,int>>arr;
    int c,r;
    for(int i=0;i<n;i++){
        cin>>c>>r;
        arr.push_back(make_pair(c-r,c+r));
    }
    sort(arr.begin(),arr.end(),cmp);
    int done=1;
    int cur=arr[0].second;
    for(int i=1;i<n;i++){
         if(arr[i].first>=cur){
              done++;
              cur=arr[i].second;
         }
    }
    cout<<n-done<<endl;
}
