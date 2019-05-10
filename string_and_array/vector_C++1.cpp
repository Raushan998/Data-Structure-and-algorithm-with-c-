#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool compare (int a,int b){
    return a>b;
}
int main(){
    vector<int>v;
    v.reserve(100);//Reserving the vector upto 100
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        v.push_back(temp);//pushing the elements at back 
    }
    v.pop_back();//Removing the element from back 
    //v.clear();
    cout<<v.capacity()<<endl;
    sort(v.begin(),v.end(),compare);
    //print these
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    cout<<v.max_size()<<endl;
    return 0;
}