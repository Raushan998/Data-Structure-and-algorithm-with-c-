#include<bits/stdc++.h>
using namespace std;
template<typename T>
class Graph{
     unordered_map<T,list<pair<T,int>>>m;
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
         void dijsktrasssp(T src){
              unordered_map<T,int>dest;
              ///set all the distance to infinity;
              for(auto j:m){
                   dest[j.first]=INT_MAX;
              }
              set<pair<int,T>>s;
              dest[src]=0;
              s.insert(make_pair(0,src));
              while(!s.empty()){
                   ///find the pair at the front
                   auto p=*(s.begin());
                   T node=p.second;
                   int nodeDist=p.first;
                   s.erase(s.begin());
                   ///iterate over neighbour /children of the parent node
                   for(auto childpair:m[node]){
                       if(nodeDist+childpair.second<dest[childpair.first]){
                             ///In the setup updation of particular is not present
                             ///we have to remove the old pair and insert the new pair to simulation updation
                             T dist=childpair.first;
                             cout<<dest[dist]<<endl;
                             auto f=s.find(make_pair(dest[dist],dist));
                             if(f!=s.end()){
                                 s.erase(f);
                             }
                             ///insert the new pair
                             dest[dist]=nodeDist+childpair.second;
                             s.insert(make_pair(dest[dist],dist));
                       }
                   }
              }
              for(auto d:dest){
                  cout<<d.first<<" is located at a distance of "<<d.second<<endl;
              }
         }
};
int main(){
     Graph<string>india;
     india.addEdge("Amritsar","Delhi",1);
     india.addEdge("Amritsar","Jaipur",4);
     india.addEdge("Jaipur","Delhi",2);
     india.addEdge("Jaipur","Mumbai",8);
     india.addEdge("Bhopal","Agra",2);
     india.addEdge("Mumbai","Bhopal",3);
     india.addEdge("Agra","Delhi",1);
     india.dijsktrasssp("Amritsar");
}
