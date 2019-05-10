#include<iostream>
void countingsort(int A[],int,int B[],int);
using namespace std;
int main(){
   int N;
   cin>>N;
   int A[100];
   for(int i=0;i<N;i++){
   cin>>A[i];
   }
   int B[N];
   int K=0;
   for(int i=0;i<N;i++){
       if(K<A[i]){
           K=A[i];
       }
   }
   countingsort(A,N,B,K+1);
   for(int i=0;i<N;i++){
        cout<<B[i]<<" ";
    }
  return 0;
}
void countingsort(int A[],int N,int B[],int K){
    int i,j,C[K];
    for(int i=0;i<K;i++){
        C[i]=0;
    }
    for(j=0;j<N;j++)
        C[A[j]]=C[A[j]]+1;
    for(i=1;i<K;i++)
        C[i]=C[i]+C[i-1];
    for(j=N-1;j>=0;j--){
        B[C[A[j]]-1]=A[j];
        C[A[j]]=C[A[j]]-1;
    }

}
