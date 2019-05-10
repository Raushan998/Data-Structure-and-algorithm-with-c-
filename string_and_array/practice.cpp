#include <iostream>
#include<cstring>
#include <sstream>
#include<cmath>
using namespace std;
int main() {
   char str[100];
   string str1;
   int t;
   cin>>t;
   for(int i=0;i<t;i++){
      cin>>str[i];
   }
   int count1=0;
   for(int i=0;i<t;i++){
       for(int j=i;j<t;j++){
           for(int k=i;k<=j;k++){
              str1+=str[k];
           }
      //  cout<<endl;
        stringstream geek(str1);

        unsigned long long int p=0;
        geek>>p;
       // cout<<p<<endl;
      //for(int v=0;v<str1.size();v++){
        // p=str1[v]*pow(10,v)+p;
        //}
        if(p==1 || p==0 || p%2==0 || p%3==0 || p%5==0 || p%7==0 || p%11==0 || p%13==0 || p%17==0 || p%23==0 || p%29==0){
                  //cout<<p<<endl;
                  count1=count1;
        }
        else{
          cout<<p<<endl;
          count1+=1;
        }
       str1.erase();
    }


      }
   cout<<count1;
      return 0;
}
