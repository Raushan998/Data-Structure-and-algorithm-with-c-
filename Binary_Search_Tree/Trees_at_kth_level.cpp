#include<iostream>
#include<queue>
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
node* buildTree(){
    int d;
    cin>>d;
    int leaf;
    cin>>leaf;
    node* root=new node(d);
    if(leaf==0){
       root->left=NULL;
       root->right=NULL;
       return root;
    }
    root->left=buildTree();
    root->right=buildTree();
    return root;
}
void print(node* root){
    if(root==NULL){
        return ;
    }
    cout<<root->data<<" ";
    print(root->left);
    print(root->right);
}
void bfs(node* root){
    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        node* f = q.front();
        if(f==NULL){
            cout<<endl;
            q.pop();
            if(!q.empty()){
                q.push(NULL);
            }
        }
        else{
            cout<<f->data<<",";
            q.pop();

            if(f->left){
                q.push(f->left);
            }
            if(f->right){
                q.push(f->right);
            }
        }
    }
    return;
}
int sum(node* root,int k){
    if(root==NULL){
        return 0;
    }
    if(k<=0){
        return root->data;
    }
    int left=sum(root->left,k-1);
    int right=sum(root->right,k-1);
    return (left+right);
    
}
int main(){
    node* root=buildTree();
    int k;
    cin>>k;
    cout<<sum(root,k)<<endl;
    return 0;
}