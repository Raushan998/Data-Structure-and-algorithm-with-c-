#include <iostream>
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
///Accepts the old root node& data & returns the new root node
node* insertInBST(node* root,int data){
    ///Base Case
    if(root==NULL){
        return new node(data);
    }
    ///Rec case-Insert in subtree and update the pointer
    if(data<=root->data){
        root->left=insertInBST(root->left,data);
    }
    else{
        root->right=insertInBST(root->right,data);
    }
    return root;
}
//Print the BST Level By Level
void bfs(node *root){
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
///Inorder print
void inorder(node* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
node*  build(){
    ///Read a list till -1 and also these numbers will be inserted into BST
    int d;
    cin>>d;
    node* root=NULL;
    while(d!=-1){
        root=insertInBST(root,d);
        cin>>d;
    }
    return root;
}
node* deleteInBST(node* root,int data){
     if(root==NULL){
        return NULL;
    }
    else if(data<root->data){
        root->left = deleteInBST(root->left,data);
        return root; 
    }
    else if(data==root->data){
        //Found the node to delete 3 Cases
        //1. Node with 0 children - Leaf Node
        if(root->left==NULL && root->right==NULL){
            delete root;
            return NULL;
        }
        //2. Case Only 1 child
            if(root->left!=NULL && root->right==NULL){
                node* temp = root->left;
                delete root;
                return temp;
            }
            if(root->right!=NULL && root->left==NULL){
                node* temp = root->right;
                delete root;
                return temp;
            }
        //3. Case 2 children
            node *replace = root->right;
            //Find the inorder successor from right subtree
            while(replace->left!=NULL){
                replace = replace->left;
            }
            root->data = replace->data;
            root->right = deleteInBST(root->right,replace->data);
            return root;
    }
    else{
        root->right = deleteInBST(root->right,data);
        return root;
    }
}
class Linkedlist{
    public:
         node* head;
         node* tail;
};
Linkedlist flatten(node* root){
    Linkedlist l;
    if(root==NULL){
        l.head=l.tail=NULL;
        return l;
    }
    ///leaf node
    if(root->left==NULL && root->right==NULL){
        l.head=l.tail=root;
        return l;
    }
    ///left is not NULL
    if(root->left!=NULL && root->right==NULL){
        Linkedlist leftll=flatten(root->left);
        leftll.tail->right=root;
        l.head=leftll.head;
        l.tail=root;
        return l;
    }
    ///Right is not NULL
    if(root->left==NULL && root->right!=NULL){
        Linkedlist rightll=flatten(root->right);
        root->right=rightll.head;
        l.head=root;
        l.tail=rightll.tail;
        return l;
    }
    ///Both sides are not NULL
    Linkedlist leftll=flatten(root->left);
    Linkedlist rightll=flatten(root->right);
    leftll.tail->right=root;
    root->right=rightll.head;
    l.head=leftll.head;
    l.tail=rightll.tail;
    return l;
}
int main() {
    node* root=build();
    inorder(root);
    cout<<endl;
    bfs(root);
    cout<<endl;
    cout<<endl;
    cout<<endl;
    Linkedlist l=flatten(root);
    node* temp=l.head;
    while(temp!=NULL){
        cout<<temp->data<<"-->";
        temp=temp->right;
    }
    return 0;
}
