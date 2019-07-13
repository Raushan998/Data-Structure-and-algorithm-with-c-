#include<iostream>
#include<cstring>
using namespace std;
class car{
    private:
       int price;
    public:
        int model_no;
        char name[20];
        ///constructor
        car(){
        ///override the default constructor
        cout<<"Making a car...."<<endl;
        }
        ///constructor with parameters-parametrised constructor
        car(int  p,int mn,char * n){
            price=p;
            model_no=mn;
            strcpy(name,n);
        }
        void start(){
             cout<<"Grrr.... starting the car"<<name<<endl;
        }
        void setprice(int p){
            if(p>1000){
                price=p;
            }
            else{
                 price=1000;
            }
        }
        int getprice(){
             return price;
        }
        void print(){
            cout<<name<<endl;
            cout<<model_no<<endl;
            cout<<price<<endl;
            cout<<endl;
        }
};
int main(){
    car c;
    ///initilaisation
    ///c.price=-500;
    c.setprice(1500);
    c.model_no=1001;
    c.name[0]='B';
    c.name[1]='M';
    c.name[2]='W';
    c.name[3]='\0';
    c.start();
    ///cout<<c.price<<endl;
    cout<<c.name<<endl;
    cout<<c.getprice()<<endl;
    car D;
    D.setprice(2000);
    cout<<D.getprice()<<endl;
    car E(100,2001,"Ferrari");
    E.print();
    ///copy constructor is to create a copy of given oject of the sametype
    car F=E;
    F.print();
    return 0;
}
