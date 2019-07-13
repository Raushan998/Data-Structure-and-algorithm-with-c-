#include<iostream>
using namespace std;
class car{
public:
     int price;
     int model_no;
     char name[20];
     void start(){
         cout<<"Grrr....starting the car!"<<name<<endl;
     }
};
int main(){
   car c;
   ///initialisation
   c.price=500;
   c.model_no=1001;
   c.name[0]='B';
   c.name[1]='M';
   c.name[2]='W';
   c.name[3]='\0';
   c.start();
   return 0;
}
