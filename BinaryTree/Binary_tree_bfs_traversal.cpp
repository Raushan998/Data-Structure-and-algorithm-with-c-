#include<iostream>
#include<queue>
using namespace std;
class node{
    public:
        node* left;
        node* right;
        int data;
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
void bfs(node* root){
    queue<node*>q;
    q.push(root);
    while(!q.empty()){
        node* f=q.front();
        cout<<f->data<<" , ";
        q.pop();
        if(f->left){
            q.push(f->left);
        }
        if(f->right){
            q.push(f->right);
        }
    }
}
int main(){
    node* root=buildtree();
    bfs(root);
    return 0;
}