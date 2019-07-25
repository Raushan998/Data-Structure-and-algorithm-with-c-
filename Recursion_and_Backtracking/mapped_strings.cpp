#include <iostream>
#include<cstring>
using namespace std;
void printstring(char *num,char *out,int i,int j,int length){
    if(num[i]=='\0'){
        out[j]='\0';
        cout<<out<<endl;
        return;
    }
    int sdigit=num[i]-'0';
    int ddigit;
    if(i+1<length){
        ddigit=(num[i]-'0')*10+(num[i+1]-'0');
    }
    else
        ddigit=sdigit;
    out[j]=sdigit+64;
    printstring(num,out,i+1,j+1,length);
    if(ddigit>9 && ddigit<=26){
        out[j]=ddigit+64;
        printstring(num,out,i+2,j+1,length);
    }
}
int main(){
    char num[10];
    char outt[10];
    cin>>num;
    int len=strlen(num);
    printstring(num,outt,0,0,len);
    return 0;
}
