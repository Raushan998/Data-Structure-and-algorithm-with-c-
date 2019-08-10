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
             dfsHelper(src,visited);
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
     graph<int>g;
     g.addEdge(0,1);
     g.addEdge(1,2);
     g.addEdge(0,4);
     g.addEdge(2,4);
     g.addEdge(2,3);
     g.addEdge(3,5);
     g.addEdge(3,4);
     g.dfs(0);
     return 0;
}
