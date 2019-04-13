#include<iostream>
#include<algorithm>
#include<cstring>
using namespace std;
bool compare(string s1,string s2){
    if(s1.length()==s2.length()){
        return (s1>s2);
    }

    else{
        return(s1.length()>s2.length());
    }
}
int main(){
string s1[10]={"apple","pineapple","Mango","Papaya","Potato"};
int n=sizeof(s1)/sizeof(s1[0]);
sort(s1,s1+n,compare);
for(int i=0;i<n;i++){
    cout<<s1[i]<<" ";
}

return 0;
}
