#include<iostream>
#include<queue>
#define ll unsigned long long int
using namespace std;
///primeSieve and optimisation
void primeSieve(ll *p,ll n){
    p[0]=p[1]=0;
    p[2]=1;
    ///let us mark all odd numbers as prime(initialisation)
    ll i;
    for(i=3;i<=n;i+=2){
        p[i]=1;
    }
    ///sieve login to mark non prime numbers as 0.
    ///1.optimisation :iterate only over odd numbers
    for(ll i=3;i<=n;i+=2){
         if(p[i]){
            for(ll j=i*i;j<=n;j+=2*i){
                p[j]=0;
            }

         }
    }
}
int main(){
    queue<int>q1,q2;
    ll N=100000;
    ll p[N]={0};
    ll a[N];
    ll k;
    int n;
    cin>>n>>k;
    int num;
    for(int i=0;i<n;i++){
         cin>>num;
         q1.push(num);
    }
    primeSieve(p,N);
    ll j=0;
    for(ll i=0;i<=100000;i++){
        if(p[i]){
            a[j]=i;
            j+=1;
        }

    }
    int i=1;
    while(i<=k){
         for(int j=0;j<=n;j++){
          if(q1.front()%a[i-1]==0){
               q2.push(q1.front());
               q1.pop();
          }
          int num=q1.front();
          q1.pop();
          q1.push(num);
       }
          i+=1;
    }
    for(int i=0;i<n;i++){
        if(!q2.empty()){
            cout<<q2.front()<<endl;
            q2.pop();
        }
        else{
             if(!q1.empty()){
                 cout<<q1.front()<<endl;
                 q1.pop();
             }
        }
    }
    return 0;

}
