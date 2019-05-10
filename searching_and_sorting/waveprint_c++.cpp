#include<iostream>
#include<cstring>
using namespace std;
int main(){
  char a;
  cin>>a;
  if(isupper(a)){
    cout<<"UPPERCASE"<<endl;
  }
  if(islower(a)){
    cout<<"LOWERCASE"<<endl;
  }
  else{
    cout<<"INVALID INPUT";
  }
  return 0;
}
