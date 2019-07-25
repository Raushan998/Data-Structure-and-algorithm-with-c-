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
class HBPair{
public:
    int height;
    bool balance;
};

HBPair isHeightBalance(node *root){
    HBPair p;
    if(root==NULL){
        p.height = 0;
        p.balance = true;
        return p;
    }
    //Recurisve Case
    HBPair left = isHeightBalance(root->left);
    HBPair right = isHeightBalance(root->right);

    p.height = max(left.height,right.height) + 1;

    if(abs(left.height-right.height)<=1 && left.balance && right.balance){
        p.balance = true;
    }
    else{
        p.balance = false;
    }
    return p;
}

int main(){
    node* root=buildTree();
    if(isHeightBalance(root).balance){
        cout<<"Balanced Tree"<<endl;
    }
    else{
        cout<<"Not a balanced Tree"<<endl;
    }
    return 0;
}