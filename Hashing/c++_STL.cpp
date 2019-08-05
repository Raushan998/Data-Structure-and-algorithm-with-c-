#include<iostream>
#include<unordered_map>
using namespace std;
class Fruit{
public:
      string name;
      int price;
      string city;
      public:
          Fruit(){

          }
     Fruit(string n,int p,string c){
         name=n;
         price=p;
         city=c;
     }
};
int main(){
     unordered_map<string,Fruit>myMap;
     Fruit f("Mango",100,"Delhi");
     myMap[f.name]=f;
     Fruit fs=myMap["Mango"];
     cout<<fs.city<<endl;
     cout<<fs.price<<endl;
     ///count funtion 0 or 1
     cout<<"Apple "<<myMap.count("Apple")<<endl;
     cout<<"Mango"<<myMap.count("Mango")<<endl;
     cout<<"Enter a fruit to search:";
     string fruit;
     cin>>fruit;
     if(myMap.count(fruit)!=0){
         cout<<"price is "<<myMap[fruit].price<<endl;
     }
     else{
          cout<<"fruit doesn't exist.";
     }
     return 0;
}
