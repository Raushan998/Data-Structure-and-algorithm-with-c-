#include <iostream>
#include<algorithm>
#include<cstring>
using namespace std;
void permutate(char *in,int i,char s){
    ///Base case
    if(in[i]=='\0' && in[0]<s){
        cout<<in<<" ";
        return;
    }
    ///Recursive case
    for(int j=i;in[j]!='\0';j++)
        {
            swap(in[i],in[j]);
            permutate(in,i+1,s);
            swap(in[i],in[j]);
        }
        return;
}
int main() {
   char in[100];
   cin>>in;
   int i=strlen(in);
   sort(&in[0],&in[i]);
   char s=in[i-1];
   permutate(in,0,s);
   return 0;
}
