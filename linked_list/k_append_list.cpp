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
      node *tail=head;
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
int length(node* head){
     int len=0;
     while(head!=NULL){
          head=head->next;
          len+=1;
     }
     return len;
}
node* find_k(node* &head,int k){
    node* prev=head;
    node* curr=head;
    int l=length(head);
    for(int i=0;i<l-k;i++){
        prev=prev->next;
     }
    return prev;
}
int main(){
     node* head=NULL;
     node *head1;
     int data;
     cin>>data;
     int num;
     while(data--){
         cin>>num;
         insertAtTail(head,num);
     }
      int k;
     cin>>k;
     head1=head;
     head=find_k(head,k);
     cout<<head;
     int l=length(head1);
     for(int i=0;i<l-k;i++){
          cout<<head1->data<<" ";
          head1=head1->next;
     }
     return 0;
}
