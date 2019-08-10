#include<bits/stdc++.h>
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
         bool iscyclicHelper(T node,map<T,bool>&visited,map<T,bool>&instack){
               ///processing the current node-visited
               visited[node]=true;
               instack[node]=true;
               for(T neighbour:adjList[node]){
                     ///Two things can happen
                     ///The current node is not visited but its further branch is leading to cycle
                     if(!visited[neighbour] && iscyclicHelper(neighbour,visited,instack) || instack[neighbour]){
                           return true;
                     }
               }
               ///going to pop out the node ,instack=false
               instack[node]=false;
               return false;
         }
        bool iscycle(){
             map<T,bool>visited;
             map<T,bool>instack;
             ///To check for cycle in each dfs tree
             for(auto i:adjList){
                  T node=i.first;
                  if(!visited[node]){
                       bool cyclepresent=iscyclicHelper(node,visited,instack);
                       if(cyclepresent)
                            return true;
                  }
             }
             return false;
        }
};
int main(){
    Graph<int>g;
    g.addEdge(0,2,false);
    g.addEdge(0,1,false);
    g.addEdge(2,3,false);
    g.addEdge(2,4,false);
   // g.addEdge(3,0,false);
    g.addEdge(4,5,false);
    g.addEdge(1,5,false);
    if(g.iscycle()){
         cout<<"cylce present"<<endl;
    }
    else{
        cout<<"cycle nodt present"<<endl;
    }
    return 0;

}
