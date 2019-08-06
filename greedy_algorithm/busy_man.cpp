#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
struct cmpr{
     bool operator()(pair<int,int>l,pair<int,int>r){
            return l.second<r.second;
     }
}cmp;
int main(){
    int t,n,s,e,res;
    cin>>t;
    while(t--){
         res=1;
         vector<pair<int,int>>activity;
         cin>>n;
         for(int i=0;i<n;i++){
              cin>>s>>e;
              activity.push_back(make_pair(s,e));
         }
         sort(activity.begin(),activity.end(),cmp);
         int fin=activity[0].second;
         for(int i=1;i<activity.size();i++){
               if(activity[i].first>=fin){
                    fin=activity[i].second;
                    res++;
               }
         }
         cout<<res<<endl;
    }
    return 0;
}
