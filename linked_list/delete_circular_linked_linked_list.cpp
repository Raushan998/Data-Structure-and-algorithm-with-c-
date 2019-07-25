#include<iostream>
using namespace std;
class Node{
public:
    int data;
    Node *next;
    ///constructor
    Node(int data){
        this->data=data;
    }
};
Node* getNode(Node*&head,int data){
      Node* temp=head;
      while(temp->next!=head){
          if(temp->data==data){
              return temp;
          }
          temp=temp->next;
      }
      if(temp->data==data){
          return temp;
      }
      else
          return NULL;
}
void deleteNode(Node*&head,int data){
      Node* del=getNode(head,data);
      if(del==NULL){
          cout<<"Not not present in the linked list\n";
          return;
      }
      if(head==del){
           head=del->next;
      }
      Node* temp=head;
      while(temp->next!=del){
           temp=temp->next;
      }
      temp->next=del->next;
      delete del;
}
void printlist(Node *head){
     Node *temp=head;
     while(temp->next!=head){
          cout<<temp->data<<"->";
          temp=temp->next;
     }
     cout<<temp->data<<endl;
}
void push(Node *&head,int data){
    Node *ptr1=new Node(data);
    Node *temp=head;
    ///used to tranverse the ll
    ptr1->next=head;
    if(head!=NULL){
         while(temp->next!=head){
             temp=temp->next;
         }
         temp->next=ptr1;
    }
    else{
         ptr1->next=ptr1;
    }
    head=ptr1;
}
int main(){
   Node * head=NULL;
   push(head,10);
   push(head,20);
   push(head,30);
   push(head,40);
   push(head,50);
   push(head,60);
   printlist(head);
   deleteNode(head,30);
   printlist(head);
   return 0;
}
