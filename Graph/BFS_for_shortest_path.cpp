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
         void bfs(T src){
               queue<T>q;
               map<T,int>dist;
               map<T,T>parent;
               for(auto i:adjList){
                   dist[i.first]=INT_MAX;
               }
               q.push(src);
               dist[src]=0;
               parent[src]=src;
               while(!q.empty()){
                    T node=q.front();
                    cout<<node<<" ";
                    q.pop();
                    for(int neighbour:adjList[node]){
                          if(dist[neighbour]==INT_MAX){
                               dist[neighbour]=dist[node]+1;
                               q.push(neighbour);
                               parent[neighbour]=node;
                          }
                    }
               }
               ///print the diatance to all nodes
               for(auto i:adjList){
                   T node=i.first;
                   cout<<"Distance of "<<node<<" from "<<src<<" is "<<dist[node]<<endl;
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
     graph<int>g;
     g.addEdge(0,1);
     g.addEdge(1,2);
     g.addEdge(0,4);
     g.addEdge(2,4);
     g.addEdge(2,3);
     g.addEdge(3,5);
     g.addEdge(3,4);
     g.bfs(0);
     return 0;
}
