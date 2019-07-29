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
void rangeinvalue(node* root,int b,int c){
    if(root==NULL){
        return;
    }
     rangeinvalue(root->left,b,c);
     if(root->data>=b && root->data<=c){
        cout<<root->data<<" ";
    }
    rangeinvalue(root->right,b,c);
}
void print(node* root){
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    print(root->left);
    print(root->right);
}
node* insert(node* root,int data){
      if(root==NULL){
          node* nn=new node(data);
          return nn;
      }
      if(data>root->data){
          root->right=insert(root->right,data);
      }
      if(data<root->data){
          root->left=insert(root->left,data);
      }
      return root;
}

node* ArrToBST(node* root,int *arr,int n){
    for(int i=0;i<n;i++){
        root=insert(root,arr[i]);
    }
    return root;
}
int main(){
    int t;
    cin>>t;
    while(t--){
    int num;
    cin>>num;
    int a[num];
    for(int i=0;i<num;i++){
          cin>>a[i];
    }
    int b,c;
    cin>>b>>c;
    node* root=new node(a[0]);
    root=ArrToBST(root,a,num);
    cout<<"# Preorder : ";
    print(root);
    cout<<endl;
    cout<<"# Nodes within range are : ";
    rangeinvalue(root,b,c);
    }
    return 0;
}