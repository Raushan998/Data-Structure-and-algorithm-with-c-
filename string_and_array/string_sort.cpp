#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
bool compare(string s1,string s2){
    if(s1[0]==s2[0])
        s1.length()<s2.length();
    else
	    return(s1<s2);
}
int main() {
	int n;
	cin>>n;
	string str1[n];
	for(int i=0;i<n;i++){
		cin>>str1[i];
	}
	sort(str1,str1+n,compare);
	for(int i=0;i<n;i++){
		cout<<str1[i]<<endl;
	}
	return 0;
}
