#include<iostream>
using namespace std;
int main(){
    char a[]={'A','B','C','D','\0'};
    cout<<a<<endl;
    cout<<sizeof(a)<<endl;
    char b[]="hello";
    cout<<b<<endl;
    char d[100];
    cin.get(d,'\t');
    cout<<d<<endl;//It prints the character array with special character i.e; '\t','\n',' '.
    //char c[100];
    //cin>>c;
    //cin.getline(c,100);//It include three parameters one is array,second size of array and third is  delimeter i.e; '.','\n',' '.
    //cout<<c<<endl;
    char paragraph[1000];
    cin.getline(paragraph,1000,'.');
    cout<<paragraph;
    return 0;
}