#include<iostream>
#include<cstring>
using namespace std;
int main(){
    string s[]={"banana","apple","Papaya","orange"};
    
    for(int i=0;i<5;i++){
        cout<<s[i]<<" ";
    }
    cout<<endl;    
    cout<<"Enter the fruit to search:";
    string s2;
    int i;
    getline(cin,s2);
    for(i=0;i<5;i++){
        if(s2==s[i]){
            cout<<"Found at index "<<i<<endl;
            break;
        }

    }
    if(i==5){
        cout<<"Not Found.";
    }
    return 0;
}