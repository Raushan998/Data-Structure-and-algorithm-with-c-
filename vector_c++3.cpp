#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>vect1={1,2,3,4,5};
    vector<int>vect2;
    vect2.swap(vect1);
    for(int i=0;i<vect2.size();i++){
        cout<<vect2[i]<<" ";

    }
    return 0;
}