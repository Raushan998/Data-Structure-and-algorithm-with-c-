#include<iostream>
#include<cstring>
char *mystrok(char [],char);
using namespace std;
int main(){
    char str[]="Hi, I am teaching about strings, in c++";
    char *ptr;
    ptr=mystrok(str,',');
    while(ptr!=NULL){
        cout<<ptr<<endl;
        ptr=mystrok(NULL,',');
    }
    return 0;
}
char *mystrok(char str[],char delim){
    static char *input=NULL;
    if(str!=NULL){
        input=str;
    }
    if(input==NULL){
        return NULL;
    }
    char *output=new char[strlen(input)+1];//+1 for the '\0' or null char at the end return a word as dynamically
    //allocated from my function .
    //Read the word from imput and i will  stored in output and just return till delimeter
    int i;
    for(i=0;input[i]!='\0';i++){
        if(input[i]!=delim){
            //do some work-copy the char into output array
            output[i]=input[i];
        }
        else{
            //you are now at delim
            output[i]='\0';
            input=input+i+1;
            return output;
        }
    }
    //Return the last word even if delimeter is not there
    output[i]='\0';
    input=NULL;
    return output;
}
