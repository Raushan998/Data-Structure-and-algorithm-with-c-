#include<climits>
#include<iostream>
#include<map>
#include<list>
#include<queue>
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
         void dfsHelper(T node,map<T,bool>&visited){
              ///whenever to come to a node mark it visited
              visited[node]=true;
              cout<<node<<" ";
              ///Try to find out anode which is neighbour of current node and not yet visited
              for(T neighbour :adjList[node]){
                   if(!visited[neighbour]){
                        dfsHelper(neighbour,visited);
                   }
              }
         }
         void dfs(T src){
             map<T,bool>visited;
             int component=1;
             dfsHelper(src,visited);
             cout<<endl;
             for(auto i:adjList){
                  T city=i.first;
                  if(!visited[city]){
                       dfsHelper(city,visited);
                       component++;
                  }
             }
             cout<<"The current component is"<<component<<endl;
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
     g.addEdge("Amritsar","Jaipur");
     g.addEdge("Amritsar","Delhi");
     g.addEdge("Delhi","Jaipur");
     g.addEdge("Mumbai","Jaipur");
     g.addEdge("Mumbai","Bhopal");
     g.addEdge("Mumbai","Banglore");
     g.addEdge("Agra","Delhi");
     g.addEdge("Andaman","Nicobar");
     g.dfs("Amritsar");
     return 0;
}
