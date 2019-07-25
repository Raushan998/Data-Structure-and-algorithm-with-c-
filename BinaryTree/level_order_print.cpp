#include<iostream>
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
int main(){
     node* root=buildtree();
     printAlllevel(root);
     return 0;
}
