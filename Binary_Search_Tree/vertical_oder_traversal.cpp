#include<iostream>
#include<vector>
#include<map>
using namespace std;
class node{
     public:
         int data;
         node* right;
         node* left;
         node(int d){
             data=d;
             right=NULL;
             left=NULL;
         }
};
void getvertical(node* root,int hd,map<int,vector<int>>&m){
      if(root==NULL){
           return;
      }
      m[hd].push_back(root->data);
      getvertical(root->left,hd-1,m);
      getvertical(root->right,hd+1,m);
}
void printvertical(node* root){
     map<int,vector<int>>m;
     int hd=0;
     getvertical(root,hd,m);
     map<int,vector<int>>::iterator it;
     for(it=m.begin();it!=m.end();it++){
           for(int i=0;i<it->second.size();i++){
                cout<<it->first[i]<<" ";
           }
           cout<<endl;
     }
}
node* buildTree(){
    int d;
    cin>>d;
    if(d==-1){
         return NULL;
    }
    node* root=new node(d);
    root->left=buildTree();
    root->right=buildTree();
    return root;
}
int main(){
    node* root=buildTree();
    printvertical(root);
    return 0;
}
