#include<iostream>
#include<map>
#include<list>
#include<queue>
using namespace std;
template<typename T>
class Graph{
      map<T,list<T>>adjList;
      public:
           Graph(){

          }
          void addEdge(T u,T v,bool bidir=true){
               adjList[u].push_back(v);
               if(bidir){
                    adjList[v].push_back(u);
               }
          }
          void TopologicalSort(){
               map<T,bool>visited;
               map<T,int>indegree;
               queue<T>q;
               for(auto i:adjList){
                     T node=i.first;
                     visited[node]=false;
                     indegree[node]=0;
               }
               for(auto i:adjList){
                    T node=i.first;
                    for(T v:adjList[node]){
                         indegree[v]++;
                    }
               }
               for(auto i:adjList){
                    T node=i.first;
                    if(indegree[node]==0){
                         q.push(node);
                    }
               }
               ///start with algorithm
               while(!q.empty()){
                    T node=q.front();
                    q.pop();
                    cout<<node<<"->";
                    for(T neighbour:adjList[node]){
                          indegree[neighbour]--;
                          if(indegree[neighbour]==0){
                               q.push(neighbour);
                          }
                    }
               }

          }
};
int main(){
    Graph<string>g;
    g.addEdge("English","Programming Logic",false);
    g.addEdge("Maths","Programming Logic",false);
    g.addEdge("Programming Logic","HTML",false);
    g.addEdge("Programming Logic","python",false);
    g.addEdge("Programming Logic","Java",false);
    g.addEdge("Programming Logic","Js",false);
    g.addEdge("python","Web Dev",false);
    g.addEdge("HTML","CSS",false);
    g.addEdge("CSS","Js",false);
    g.addEdge("Js","Web Dev",false);
    g.addEdge("Java","Web Dev",false);
    g.addEdge("python","Web Dev",false);
    g.TopologicalSort();

}
