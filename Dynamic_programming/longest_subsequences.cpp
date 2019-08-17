#include<iostream>
#include<cstring>
#include<iomanip>
using namespace std;
int dp[100][100];
void lcs(char x[],char y[]){
     int m=strlen(x);
     int n=strlen(y);
     ///Base case
     for(int i=0;i<=m;i++)   dp[i][0]=0;
     for(int j=0;j<=n;j++)    dp[0][j]=0;
     for(int i=1;i<=m;i++){
         for(int j=1;j<=n;j++){
              int q=0;
              if(x[i-1]==y[j-1]){
                   q=1+dp[i-1][j-1];
              }
              else{
                  q=max(dp[i-1][j],dp[i][j-1]);
              }
              dp[i][j]=q;
         }
     }
     char LCS[100];
     int k=0;
     int i=m,j=n;
     while(i>0 && j>0){
          if(x[i-1]==y[j-1]){
               LCS[k]=x[i-1];
               cout<<x[i-1];
               i--;
               j--;
               k++;

          }
          else if(dp[i-1][j]>dp[i][j-1])
              i--;
          else
             j--;
     }
     cout<<endl;
     for(int i=strlen(LCS)-1;i>=0;i--){
         cout<<LCS[i];
     }
     cout<<endl;
}
/*string lcs_long(char x,char y[]){
    int m=strlen(x);
    int x=strlen(y);
    string s;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
             if(dp[m-i-1][n-1
}*/
int main(){
     char str1[100],str2[100];
     cin>>str1>>str2;
     lcs(str1,str2);

}
