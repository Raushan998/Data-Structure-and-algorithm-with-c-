#include<iostream>
#include<cstring>
using namespace std;
class car{
private:
    int price;
public:
    int model_no;
    char *name;
    const int tyres;
    ///constructor
    car():name(NULL),tyres(4){
    }
    ///constructor with parameters-parametrised constructor
    car(int p,int mn,char *n,int t=4):price(p),model_no(mn),tyres(t){
        int l=strlen(n);
        name=new char [l+1];
        strcpy(name,n);
    }
    ///Deep copy constructor
    car(car &x):tyres(x.tyres){
         price=x.price;
         model_no=x.model_no;
         int l=strlen(x.name);
         name=new char[l+1];
         strcpy(name,x.name);
    }
    void operator=(const car &x){
        cout<<"In Copy Assignment operator"<<endl;
        price=x.price;
        model_no=x.model_no;
        int l=strlen(x.name);
        name=new char [l+1];
        strcpy(name,x.name);
    }
    void setname(const char *n){
        if(name==NULL){
            name=new char [strlen(n)+1];
            strcpy(name,n);
        }
        else{
        ///later
        ///Delete the old name array and allocate a new one
        }
    }
    void start() const{
         cout<<"Grrr........starting the car"<<name<<endl;
    }
    void setprice(const int p){
       if(p>1000){
           price=p;
       }
       else{
           price=1000;
       }
    }
    int getprice() const{
        return price;
    }
    void print() const{
        cout<<name<<endl;
        cout<<model_no<<endl;
        cout<<price<<endl;
        cout<<endl;
    }
    ~car(){
        cout<<"Destroying the car"<<name<<endl;
        ///write code code to delete all dynamic data members
        if(name!=NULL){
            delete [] name;
        }
    }

};
int main(){
    car c;
    ///Initialisation
    ///c.price=-500;
    c.setprice(1500);
    c.setname("nano");
    c.model_no=1001;
    //c.start();
    c.print();
    car D(100,200,"BMW");
    car E(200,400,"Audi");///Default copy constructor
    D=E;///copy assignments operator -> shallow deep copy
    D.name[0]='o';
    D.print();
    E.print();
    cout<<E.tyres<<endl;
    car *DC=new car(100,200,"Dynamic Tesla Car");
    delete DC;
    return 0;
}
