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
///Inputing a list while data !=-1
void buildlist(node *&head){
   int data;
   cin>>data;
   while(data!=-1){
       insertAtTail(head,data);
       cin>>data;
   }
}
void print(node*head){
    node*temp = head;

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
void even_after_odd(node*&head){
    node* even=NULL;
    node* odd=NULL;
    while(head!=NULL){
         if((head->data)&1){
                 insertAtTail(odd,head->data);
         }
         else{
              insertAtTail(even,head->data);
         }
         head=head->next;
    }
    print(odd);
    print(even);
}
int main(){
    node *head=NULL;
    int data;
    cin>>data;
    int num;
    while(data--){
         cin>>num;
         insertAtTail(head,num);
    }
    even_after_odd(head);
    return 0;
}
