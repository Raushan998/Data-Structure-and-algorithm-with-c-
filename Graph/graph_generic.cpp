#include<iostream>
#include<map>
#include<list>
using namespace std;
template<typename T>
class graph{
     map<T,list<T>>adjList;
     public:
         graph(){
         }
         void addEdge(T u,T v,bool bidir=true){
              adjList[u].push_back(v);
              if(bidir){
                  adjList[v].push_back(u);
              }
         }
         void print(){
              ///iterate over the map
              for(auto i:adjList){
                   cout<<i.first<<"->";
                   ///i.second is LL
                   for(T entry:i.second){
                        cout<<entry<<",";
                   }
                   cout<<endl;
              }
         }
};
int main(){
     graph<string>g;
     g.addEdge("putin","Trump",false);
     g.addEdge("putin","Modi",false);
     g.addEdge("putin","pope",false);
     g.addEdge("Modi","Trump",true);
     g.addEdge("Modi","Yogi",true);
     g.addEdge("Yogi","Prabhu",false);
     g.addEdge("Prabhu","Modi",false);
     g.print();
     return 0;

}
