#include<iostream>
#include<algorithm>
using namespace std;
bool mycompare(pair<string,int>p1,pair<string,int>p2){
    ///first=Name,Second=salary
    ///preference salary > Name
    if(p1.second==p2.second){
        return p1.first<p2.first;
    }
    return p1.second>p2.second;
}
int main(){
     int min_salary,n;
     pair<string,int>emp[10005];
     cin>>min_salary;
     cin>>n;
     string name;
     int salary;
     for(int i=0;i<n;i++){
         cin>>name>>salary;
         emp[i].first=name;
         emp[i].second=salary;
     }
     sort(emp,emp+n,mycompare);
     ///print
     for(int i=0;i<n;i++){
         if(emp[i].second>min_salary){
             cout<<emp[i].first<<" "<<emp[i].second<<endl;
         }
     }
     return 0;
}
