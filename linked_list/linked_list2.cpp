#include<iostream>
using namespace std;
class node{
    public:
        int data;
        node * next;
        ///constructor
        node(int d){
            data=d;
            next=NULL;
        }
};
///passing a pointer variable by refrence
void insertAtHead(node * &head,int data){
     node * n= new node (data);
     n->next=head;
     head=n;
}
int length(node * head){
    int len=0;
    while(head!=NULL){
       head=head->next;
       len+=1;
    }
    return len;
}
void insertAttail(node *&head,int data){
    if(head==NULL){
       head=new node(data);
       return;
    }
    node * tail=head;
    while(tail->next!=NULL){
        tail=tail->next;
    }
    tail->next=new node(data);
    return;
}
void insertInmiddle(node*&head,int data,int p){
    if(head==NULL || p==0){
        insertAtHead(head,data);
    }
    else if(p>length(head)){
        insertAttail(head,data);
    }
    else{
         ///insert in the middle
         ///take p-1 jumps
         int jump=1;
         node * temp=head;
         while(jump<=p-1){
             temp=temp->next;
             jump+=1;
         }
    node *n=new node(data);
    n-> next=temp->next;
    temp->next=n;
    }
}
void print(node*head){
     node * temp=head;
     while(temp!=NULL){
         cout<<temp->data<<"->";
         temp=temp->next;
     }
     cout<<endl;
}
int main(){
    node* head=NULL;
    insertAtHead(head,5);
    insertAtHead(head,4);
    insertAtHead(head,3);
    insertAttail(head,6);
    insertInmiddle(head,2,3);
    print(head);
    return 0;
}
