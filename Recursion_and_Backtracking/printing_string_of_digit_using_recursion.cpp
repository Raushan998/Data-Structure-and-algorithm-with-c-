#include<iostream>
using namespace std;
char spelling[][10]={"zero","one","Two","Three","Four","five","six","seven","Eight","Nine"};
void print(int n){
   if(n==0){
       return ;
   }
   cout<<spelling[n%10]<<" ";
   print(n/10);

}
int main(){
    int n;
    cin>>n;
    print(n);
    return 0;
}
