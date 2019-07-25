#include<iostream>
#include<cstring>
using namespace std;
void removestring(string num,char out[],int i){
     if(num.length()==0){
        out[i]='\0';
        return;
    }
     if(num[0]!='x'){
         cout<<num[0];
     }
     else{
          out[i]='x';
          i+=1;
     }
     removestring(num.substr(1),out,i);

}
int main(){
   string num;
   char out[100];
   getline(cin,num);
   int len=num.length();
   int i=0;
   removestring(num,out,i);
    cout<<out<<endl;
   return 0;
}
