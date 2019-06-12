#include <iostream>
#include<cstring>
using namespace std;
void removepi(string c,int s,int l){
     if (s>=l)
         return;
    string b;
    if(c[s]=='p'&&c[s+1]=='i'){
         b="3.14";
         cout<<b;
         s+=1;
    }
    else{
        b=c[s];
        cout<<b;
    }
    removepi(c,s+1,l);
}
int main() {
    int t;
    cin>>t;
    cin.ignore();
    while (t--){
    string a;
    getline(cin,a);
    removepi(a,0,a.length());
    cin.ignore();
    }
    return 0;
}
