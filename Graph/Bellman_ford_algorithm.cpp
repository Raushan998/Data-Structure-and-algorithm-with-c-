#include<iostream>
#include<climits>
using namespace std;
class Edge{
    public:
        int src,dest,weight;
};
class Graph{
    public:
        int v,e;
        Edge *edge;
        Graph(int v,int e){
             this->v=v;
             this->e=e;
             edge=new Edge[e];
        }
        void addEdge(int u,int v,int w,int count){
            edge[count].src=u;
            edge[count].dest=v;
            edge[count].weight=w;
        }
        void Bellmanford(int src){
            int distance[v];
            for(int i=0;i<v;i++){
                 if(i==src){
                     distance[i]=0;
                 }
                 else{
                      distance[i]=INT_MAX;
                 }
            }
            ///Relaxation time
            for(int i=1;i<=v-1;i++){
                for(int j=0;j<e;j++){
                     int src=edge[j].src;
                     int dest=edge[j].dest;
                     int wt=edge[j].weight;
                     if(distance[src]!=INT_MAX && distance[src]+wt<distance[dest]){
                          distance[dest]=distance[src]+wt;
                     }
                }
            }
            ///check for negative weight cycle
            for(int j=0;j<e;j++){
                int src=edge[j].src;
                int dest=edge[j].dest;
                int wt=edge[j].weight;
                ///Relaxation check
                if(distance[src]!=INT_MAX && (distance[src]+wt)<distance[dest]){
                      cout<<"Graph has negative cycle";
                      return;
                }

            }
            for(int i=0;i<v;i++){
                cout<<i<<"-"<<distance[i]<<endl;
            }
        }
};
int main(int argc,char const *argv[]){
     int v,e;
     cin>>v>>e;
     Graph g(v,e);
     for(int i=0;i<e;i++){
          int u,v,w;
          cin>>u>>v>>w ;
          g.addEdge(u,v,w,i);
     }
     g.Bellmanford(0);
     return 0;
}