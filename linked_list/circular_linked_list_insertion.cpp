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
   printlist(head);
   return 0;
}
