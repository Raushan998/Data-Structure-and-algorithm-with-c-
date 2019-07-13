#include<iostream>
using namespace std;
class car{
private:
    int price;
public:
    int model_no;
    char name[20];
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
};
int main(){
   car c;
   ///initialisation
   ///c.price=-500;
   c.setprice(-1000);
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
   D.name[0]='A';
   D.name[1]='U';
   D.name[2]='D';
   D.name[3]='I';
   D.name[4]='\0';
   cout<<D.name<<endl;
   cout<<D.getprice()<<endl;
   return 0;
}
