#include<iostream>
using namespace std;
class car{
public:
    int price;
    int model_no;
    char name[20];
};
int main(){
    car c;
    cout<<sizeof(c)<<endl;///c is an actual object 28 bytes
    cout<<sizeof(car)<<endl;
    //car c[100];///Array of an object
    return 0;
}
