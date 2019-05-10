#include<cstring>
#include<iostream>
using namespace std;
void filterchar(char *a,int no){
    int i=0;
    while(no>0){
       (no&1)?cout<<a[i]:cout<<"";
       i++;
       no=no>>1;
}

    cout<<endl;
}
void generatesubset(char *a){
///generate a range of numbers from 0 to 2^n-1
int n=strlen(a);
int range=(1<<n)-1;
int count1=0;
for(int i=0;i<=range;i++){
   filterchar(a,i);
}
}

int main(){
  int t;
  cin>>t;
  while(t--){
  char a[100];
  cin>>a;
  generatesubset(a);
  }
  return 0;
}
