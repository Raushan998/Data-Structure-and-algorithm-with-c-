#include<bits/stdc++.h>
using namespace std;
int x=0;

class node{

    public:
    node*right=NULL;
    node*left=NULL;
    int data;
    
    node(int d){
        data=d;
    }
    
};

node*insert(node*&root){

if(x==0){
int k;
cin>>k;
x++;
root=new node(k);
//cout<<k<<endl;
root->left=insert(root->left);
root->right=insert(root->right);
return root;
}

   string s="abc";
   cin>>s;
  if(s!="abc"){
      
       if(s=="true"){
       int d;
       cin>>d;
       //cout<<d<<" "<<s<<endl;
       node*nn=new node(d);
       nn->left=insert(nn->left);
       nn->right=insert(nn->right);
       return nn;
          
      }
      
      else{
         return root;
      }

  }
  
    return root;
    
}

void print(node*root){
    
    if(root==NULL){
        return;
    }
    cout<<root->data<<" ";
    print(root->left);
    print(root->right);
    
    return;
}

bool check(node*root1,node*root2){

if(root1==NULL and root2==NULL){
    return true;
}

else if(root1==NULL or root2==NULL){
    return false;
}
if(root1->data==root2->data){

    return check(root1->right,root2->right) &&  check(root1->left,root2->left);
}

else{
    return false;
}

}

int main() {
   node*root1=NULL;
   node*root2=NULL;
   x=0;
    insert(root1);
  x=0;
    insert(root2);
    //print(root1);
    if(check(root1,root2)){
        cout<<"true";
    }
    else{
        cout<<"false";
    }

    //print(root2);
    
}