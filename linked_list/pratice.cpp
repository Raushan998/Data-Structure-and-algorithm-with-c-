#include<iostream>
using namespace std;
class node{
public:
    int data;
    node* next;
    node(int d){
         data=d;
         next=NULL;
    }
};
void insertAtTail(node*&head,int data){
       if(head==NULL){
            head=new node(data);
            return;
       }
       node* tail=head;
       while(tail->next!=NULL){
            tail=tail->next;
       }
       tail->next=new node(data);
       return;
}
void buildlist(node *&head){
   int data;
   cin>>data;
   while(data!=-1){
       insertAtTail(head,data);
       cin>>data;
   }
}
void print(node*head){
    //node*temp = head;

    while(head!=NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
}
istream& operator>>(istream&is,node*&head){
    buildlist(head);
    return is;
}
ostream& operator<<(ostream &os,node *head){
    print(head);
    return os;
}

bool detectCycle(node*&head){
     node *slow=head;
     node* fast=head;
     while(fast!=NULL && fast->next!=NULL){
          fast=fast->next->next;
          slow=slow->next;
          if(fast==slow){
              return true;
          }
     }
     return false;
}
int main(){
     node *head=NULL;
     cin>>head;
     head->next=head;
     if(detectCycle(head)){
          cout<<"cycle is found!";
     }
     else{
         cout<<"cycle is not found";
     }
}
