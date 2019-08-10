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
         bool isCyclic(T src){
              queue<T>q;
              map<T,bool>visited;
              map<T,int>parent;
              q.push(src);
              parent[src]=src;
              visited[src]=true;
              while(!q.empty()){
                   T node=q.front();
                   q.pop();
                   ///iterate over the neighbours of that node leaving parent
                   for(T neighbour:adjList[node]){
                        if(visited[neighbour]==true && parent[node]!=neighbour){
                             return true;
                        }
                        else if(!visited[neighbour]){
                             visited[neighbour]=true;
                             parent[neighbour]=node;
                             q.push(neighbour);
                           }
                        }
                   }

              return false;
         }

};
int main(){
     Graph<int>g;
     g.addEdge(1,2);
     //g.addEdge(1,4);
     g.addEdge(4,3);
     g.addEdge(2,3);
     if(g.isCyclic(1)){
           cout<<"Cyclic Graph"<<endl;
     }
     else{
          cout<<"Not cyclic Graph"<<endl;
     }
     return 0;
}
