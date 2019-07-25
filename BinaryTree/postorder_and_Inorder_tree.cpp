#include<iostream>
using namespace std;
class node{
     public:
         node* left;
         int data;
         node* right;
         node(int d){
             data=d;
             left=NULL;
             right=NULL;
         }
};
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
void printIn(node* root){
    if(root==NULL){
        return;
    }
    ///otherwise left root right
    printIn(root->left);
    cout<<root->data<<" ";
    printIn(root->right);
}
void printpost(node *root){
    if(root==NULL){
        return;
    }
    printpost(root->left);
    printpost(root->right);
    cout<<root->data<<" ";
}
void print(node* root){
    if(root==NULL){
        return;
    }
    ///otherwise print root first followed by subtrees (children)
    cout<<root->data<<" ";
    print(root->left);
    print(root->right);
}
int main(){
     node* root=buildTree();
     print(root);
     cout<<endl;
     printIn(root);
     cout<<endl;
     printpost(root);
     cout<<endl;
     return 0;
}
