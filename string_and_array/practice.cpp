#include<iostream>
using namespace std;
class Vector{
      int *arr;
      int cs;
      int maxSize;
      public:
          Vector(int defaultSize=4){
               maxSize=defaultSize;
               cs=0;
               arr=new int[maxSize];
          }
         void push_back(int data){
           if(cs==maxSize){
            //Doubling Operations
            int *oldArr = arr;
            arr = new int[2*maxSize];
            maxSize = 2*maxSize;

            for(int i=0;i<cs;i++){
                arr[i] = oldArr[i];
            }
            //Delete the oldArr
            delete [] oldArr;
        }
        arr[cs] = data;
        cs++;
    }
    bool empty(){
        return cs==0;
      }
        int getSize(){
            return cs;
        }
        int getmaxSize(){
             return maxSize;
        }
        void pop_back(){
            if(!empty()){
                cs--;
            }
        }
        void print(){
            for(int i=0;i<cs;i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
        int at(int i){
            return arr[i];
        }

      int& operator[](int i){///return by reference
            return arr[i];
        }
        int & operator+(int i,int j){
             return i+j;
        }
};

  istream &operator>>(istream &is ,Vector v){
           return is;
   }
  ostream& operator << (ostream &os, Vector v){
            cout<<"In << operator"<<endl;
            v.print();
            return os;
        }
int main(){
    Vector v(100);
    for(int i=0;i<50;i++)
        v.push_back(i*i);
    //v.print();
    cout<<v.getmaxSize();
    cout<<endl;
    cout<<v.at(10);
    cout<<endl;
    cout<<v[10]/10;
    cout<<endl;
    cout<<v[10]+v[11];
    return 0;
}
