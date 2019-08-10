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
         int bfs(T src,T dest){
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
                    ///cout<<node<<" ";
                    q.pop();
                    for(int neighbour:adjList[node]){
                          if(dist[neighbour]==INT_MAX){
                               q.push(neighbour);
                               dist[neighbour]=dist[node]+1;
                               parent[neighbour]=node;
                          }
                    }
               }
               ///print the diatance to all nodes
              for(auto i:adjList){
                T node=i.first;
                    cout<<"Distance of "<<node<<" to "<<src<<" is "<<dist[node]<<endl;
                 }
               T temp=dest;
               while(temp!=src){
                    cout<<temp<<"<--";
                    temp=parent[temp];
               }
               cout<<src<<endl;
               return dist[dest];
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
     int board[50]={0};
     board[2]=13;
     board[5]=2;
     board[9]=18;
     board[18]=11;
     board[17]=-13;
     board[20]=-14;
     board[24]=-8;
     board[25]=-10;
     board[32]=-2;
     board[34]=-22;
     ///let firat construct the graph
     for(int u=0;u<=36;u++){
          for(int dice=1;dice<=6;dice++){
              int v=u+dice+board[u+dice];
              g.addEdge(u,v,false);
          }
     }
     cout<<"The shortest path is "<<g.bfs(1,36)<<endl;
     return 0;
}
