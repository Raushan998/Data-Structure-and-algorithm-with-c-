#include<iostream>
#include<map>
#include<list>
using namespace std;
template<typename T>
class Graph{
     map<T,list<T>>adjList;
     public:
         Graph(){

         }
         void addEdge(T U,T V,bool bidir=true){
              adjList[U].push_back(V);
              if(bidir){
                   adjList[V].push_back(U);
              }
         }
         void dfsHelper(T node,map<T,bool>&visited,list<T>&ordering){
              visited[node]=true;
              ///Will call dfs on the unvisited neighbour ours of the current node
              for(T neighbour:adjList[node]){
                   if(!visited[neighbour]){
                         dfsHelper(neighbour,visited,ordering);
                   }
              }
              ///Add 1 line for Ts
              ///At this point all the children of the current node have beeen visited
              ///so we can add the current node to the list
              ordering.push_front(node);
         }
         void  TopologicalSort(){
              map<T,bool>visited;
              list<T>ordering;
              for(auto i:adjList){
                   ///i is pair (node,list of node)
                   T node=i.first;
                   if(!visited[node]){
                        dfsHelper(node,visited,ordering);
                   }
              }
              for(T element:ordering){
                   cout<<element<<"-->";
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
      return 0;
}
