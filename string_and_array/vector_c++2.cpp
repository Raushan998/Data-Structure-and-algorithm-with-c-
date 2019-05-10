#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>vect={1,2,3,4,5};
    cout<<"original vector"<<endl;
    for(vector<int>::iterator it=vect.begin();it!=vect.end();++it)
        cout<<*it<<" ";
    cout<<endl;
    //*Remove first element
    vect.erase(vect.begin());
    cout<<"Modified vector"<<endl;
    for(vector<int>::iterator it=vect.begin();it!=vect.end();++it)
    cout<<*it<<" ";
    return 0;
}