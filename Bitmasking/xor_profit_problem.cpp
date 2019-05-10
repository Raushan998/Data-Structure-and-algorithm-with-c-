#include<iostream>
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    int x=a^b;
    int i=0;
    int k=1;
    int j=1;
    while((x&j)!=1){
        x=x|k;
        k=(1<<(i+1));
        i+=1;
        j=1<<j;
    }
    cout<<x;
    return 0;
}
