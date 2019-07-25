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
node* buildTreeFromArray(int *a,int s,int e){
    ///Base case
    if(s>e){
        return NULL;
    }
    ///Recursive case
    int mid=(s+e)/2;
    node* root=new node(a[mid]);
    root->left=buildTreeFromArray(a,s,mid-1);
    root->right=buildTreeFromArray(a,mid+1,e);
    return root;
}
void Print(node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    Print(root->left);
    Print(root->right);
}
int main(){
    int a[]={1,2,3,4,5,6,7};
    int n=7;
    node* root=buildTreeFromArray(a,0,n-1);
    Print(root);
    return 0;
}