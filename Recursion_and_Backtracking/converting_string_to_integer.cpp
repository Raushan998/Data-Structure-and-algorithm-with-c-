#include<iostream>
#include<cstring>
using namespace std;
void stringtoint(char *s){
     if(s[0]=='\0'){
         return;
     }
     else{
          cout<<s[0]-'0';
     }
     stringtoint((s+1));

}
int main(){
    char s[10];
    cin.getline(s,10,' ');
    stringtoint(s);
    return 0;

}
