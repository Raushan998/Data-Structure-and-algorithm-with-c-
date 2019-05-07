#include<iostream>
using namespace std;
///primeSieve and optimisation
void primeSieve(int *p,int n){
    p[0]=p[1]=0;
    p[2]=1;
    ///let us mark all odd numbers as prime(initialisation)
    for(int i=3;i<=n;i+=2){
        p[i]=1;
    }
    ///sieve login to mark non prime numbers as 0.
    ///1.optimisation :iterate only over odd numbers
    for(int i=3;i<=n;i+=2){
         if(p[i]){
            for(int j=i*i;j<=n;j+=2*i){
                p[j]=0;
            }

         }
    }
}
int main(){
    int N=1000000;
    int p[N]={0};
    int a[N];
    primeSieve(p,100);
    for(int i=0;i<=100;i++){
        if(p[i]){
            cout<<p[i]<<" ";
        }

    }
    return 0;

}
