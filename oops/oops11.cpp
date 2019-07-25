#include<iostream>
//template<typename T>
//#include<cstring>
using namespace std;
class vect{
       public:
           int * ans;
           void vector1(){
                 ans=new int [10];
           }
           void vector1(int t){
               ans=new int [t];
           }
           void pushback(int t){
                ans[0]=1;
           }
            int operator[](int s){
        //cout<<real<<" + "<<img<<s<<endl;
       return c[0];
    }
};
int main(){
    vect c;
    c.pushback(2);
    cout<<c[0]<<endl;
    return 0;
}
