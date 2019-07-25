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
class pair1{
    public:
         int height;
         int diameter;
};
pair1 fastDiameter(node* root){
    pair1 p;
    if(root==NULL){
        p.diameter=p.height=0;
        return p;
    }
    ///otherwise
    pair1 left=fastDiameter(root->left);
    pair1 right=fastDiameter(root->right);
    p.height=max(left.height,right.height)+1;
    p.diameter=max(left.height+right.height,max(left.diameter,right.diameter));
    return p;
}
int main(){
    node* root=buildtree();
    pair1 p=fastDiameter(root);
    cout<<p.height<<endl;
    cout<<p.diameter<<endl;
    return 0;
}
