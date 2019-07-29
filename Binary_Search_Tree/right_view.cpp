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
void rightview(node* root){
      if(root==NULL){
           return;
      }

      queue<node*>q;
      q.push(root);
      //q,push(NULL);
      while(!q.empty()){
            int count=q.size();
            while(count>0){
               node* f=q.front();
               q.pop();
            if(count==1){
                  cout<<f->data<<" ";
            }
            if(f->left!=NULL){
                 q.push(f->left);
             }
            if(f->right!=NULL){
                 q.push(f->right);
            }
            count--;
       }
    }

}

int main(){
    int d;
    cin>>d;
    node* root=new node(d);
    queue<node*>q;
    q.push(root);
    while(!q.empty()){
          node* f=q.front();
          q.pop();
          int c1,c2;
          cin>>c1>>c2;
          if(c1!=-1){
              f->left=new node(c1);
              q.push(f->left);
          }
          if(c2!=-1){
              f->right=new node(c2);
              q.push(f->right);
          }
    }
    rightview(root);
    return 0;
}
