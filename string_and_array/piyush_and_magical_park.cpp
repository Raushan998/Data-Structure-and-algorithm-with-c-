#include <iostream>
using namespace std;
int main() {
    int S,N,M,K;
    cin>>N>>M>>K>>S;
    char arr[N][M];
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            cin>>arr[i][j];
        }
    }
    
        for(int i=0;i<N;i++){
            for(int j=0;j<M;j++){
                if(j==0){
                   if(S>0){
                    if(arr[i][j]=='.'){
                    S=S-2;
                    }
                    if(arr[i][j]=='*'){
                    S=S+5;
                    }
                    if(arr[i][j]=='#'){
                    S=S-1;
                    break;
                    }
                }
                }
                else{
                   if(S>0){
                    if(arr[i][j]=='.'){
                        S=S-3;
                    }
                    if(arr[i][j]=='*'){
                        S=S+4;
                            }
                    if(arr[i][j]=='#'){
                        S=S-1;
                        break;
                    }
                
            }
            }
        }
    }
    if(S>=K){
        cout<<"Yes"<<endl;
         cout<<S;
    }
    else{
        if(S>0){
        cout<<"NO"<<endl;
         cout<<S;
    }
    }
   
    return 0;

}
