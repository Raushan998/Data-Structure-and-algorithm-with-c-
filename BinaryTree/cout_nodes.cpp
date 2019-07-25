#include<iostream>
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
node* buildlist(){
    int d;
    cin>>d;
    if(d==-1){
        return NULL;
    }
    node* root=new node(d);
    root->left=buildlist();
    root->right=buildlist();
    return root;
}
int count(node* root){
    if(root==NULL){
        return 0;
    }
    return 1+count(root->left)+count(root->right);
}
int main(){
    node* root=buildlist();
    cout<<count(root)<<endl;
}
