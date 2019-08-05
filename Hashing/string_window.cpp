#include<iostream>
#include<cstring>
#include<climits>
using namespace std;
const int no_of_chars=256;
string string_window(string str1,string str2){
    if(str2.length()>str1.length()){
         cout<<"No String";
         return "";
    }
    int len1=str1.length();
    int len2=str2.length();
    int str1_hash[no_of_chars]={0};
    int str2_hash[no_of_chars]={0};
    for(int i=0;i<str2.length();i++)
         str2_hash[str2[i]]++;
   int start=0,count=0,min_index=INT_MAX,start_index=-1,len_window=0;
   for(int j=0;j<len1;j++){
        str1_hash[str1[j]]++;
        if(str1_hash[str1[j]]<=str2_hash[str1[j]] && str2_hash[str1[j]]!=0){
             count+=1;
        }
        if(count==str2.length()){
              while(str1_hash[str1[start]]>str2_hash[str1[start]] || str2_hash[str1[start]]==0){
                     if(str1_hash[str1[start]]>str2_hash[str1[start]])
                          str1_hash[str1[start]]--;
                      start++;
              }
              ///update the value
              len_window=j-start+1;
              if(min_index>len_window){
                   min_index=len_window;
                   start_index=start;
              }

        }
   }
   if(start_index==-1){
        return "No string";
   }
   return str1.substr(start_index,min_index);
}
int main(){
    string str1,str2;
    getline(cin,str1);
    cin>>str2;
    cout<<string_window(str1,str2)<<endl;
    return 0;
}
