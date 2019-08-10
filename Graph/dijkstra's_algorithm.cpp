#include<bits/stdc++.h>
using namespace std;
template<typename T>
class Graph{
     unorderd_map<T,list<pair<T,int>>>m;
     public:
         Graph(){

         }
         void addEdge(T u,T v,int dist,bool bidir=true){
               m[u].push_back(make_pair(v,dist));
               if(bidir){
                    m[v].push_back(make_pair(u,dist));
               }
         }
         void printAdj(){
             ///let's try to print the adjlist
             ///iterate over all the key pair in the top
             for(auto j:m){
                  cout<<j.first<<"->";
                  ///iterate over the list
                  for(auto l:j.second){
                      cout<<"("<<l.first<<","<<l.second<<" )";
                  }
                  cout<<endl;
             }
         }
};
int main(){
     Graph<string>india;
     india.addEdge("Amritsar","Delhi",1);
     india.addEdge("Amritsar","Jai[ur",4);
     india.addEdge("Jaipur","Delhi",2);
     india.addEdge("Jaipur","Mumbai",8);
     india.addEdge("Bhopal","Agra",2);
     india.addEdge("MUmbai","Bhopal",3);
     india.addEdge("Agra","Delhi",1);
     india.printAdj();
}
