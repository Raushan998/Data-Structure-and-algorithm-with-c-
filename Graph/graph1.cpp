#include<list>
#include<iostream>
using namespace std;
class graph{
     int v;
     list<int>*l;
     public:
         graph(int v){
              v=v;
              ///Array of linked list
              l=new list<int>[v];
              }
              void addEdge(int u,int v,bool bidir=true){
                   l[u].push_back(v);
                   if(bidir){
                       l[v].push_back(u);
                   }
              }
              void printAdjList(){
                   for(int i=0;i<v;i++){
                        cout<<i<<"->";
                        ///l[i] is a linked lsit
                        for(int vertex:l[i]){
                             cout<<vertex<<",";
                        }
                        cout<<endl;
                   }
              }

};
int main(){
     ///Graph has 5 vertex
     graph g(5);
     g.addEdge(0,1);
     g.addEdge(0,4);
     g.addEdge(4,3);
     g.addEdge(1,4);
     g.addEdge(1,2);
     g.addEdge(2,3);
     g.addEdge(1,3);
     g.printAdjList();
     return 0;
}
