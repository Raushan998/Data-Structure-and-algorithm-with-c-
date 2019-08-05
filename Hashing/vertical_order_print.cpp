#include<iostream>
#include<vector>
#include<map>
using namespace std;
class node{
    public:
        node *left;
        int data;
        node *right;
        node(int d){
            data=d;
            left=NULL;
            right=NULL;
        }
};
node* buildtree(){
    int d;
    cin>>d;
    if(d==-1){
         return NULL;
    }
    node* root=new node(d);
    root->left=buildtree();
    root->right=buildtree();
    return root;
}
int height(node* root){
     if(root==NULL)
         return 0;
     int ls=height(root->left);
     int rs=height(root->right);
     return max(ls,rs)+1;
}
void printkthlevel(node* root,int k){
    if(root==NULL){
        return;
    }
    if(k==1){
        cout<<root->data<<" ";
        return;
    }
    printkthlevel(root->left,k-1);
    printkthlevel(root->right,k-1);
    return;
}
void printAlllevel(node* root){
     int H=height(root);
     for(int i=1;i<=H;i++){
          printkthlevel(root,i);
          cout<<endl;
     }
     return;
}
void vop(node* root,map<int,vector<int>>&m,int d=0){
    if(root==NULL){
        return;
    }
    m[d].push_back(root->data);
    vop(root->left,m,d-1);
    vop(root->right,m,d+1);
}
int main(){
     node* root=buildtree();
     map<int,vector<int>>m;
     vop(root,m);
     for(auto it=m.begin();it!=m.end();it++){
         cout<<it->first<<" -> ";
         ///vector
         for(int j=0;j<it->second.size();j++){
              cout<<it->second[j]<<" , ";
         }
         cout<<endl;
     }
     return 0;
}
