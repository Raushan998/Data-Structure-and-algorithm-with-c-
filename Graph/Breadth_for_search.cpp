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
               map<T,bool>visited;
               q.push(src);
               visited[src]=true;
               while(!q.empty()){
                    T node=q.front();
                    cout<<node<<" ";
                    q.pop();
                    ///for the neighbours of the current node,find out the node which are not visited
                    for(int neighbours:adjList[node]){
                         if(!visited[neighbours]){
                              q.push(neighbours);
                              visited[neighbours]=true;
                         }
                    }
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
