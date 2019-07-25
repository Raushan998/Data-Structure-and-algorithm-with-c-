#include<iostream>
using namespace std;
class node{
public:
    int data;
    node*  next;
    node(int d){
        data=d;
        next=NULL;
    }
};
void insertAtTail(node*&head,int data){

    if(head==NULL){
        head = new node(data);
        return;
    }
    node*tail = head;
    while(tail->next!=NULL){
        tail = tail->next;
    }
    tail->next = new node(data);
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
    cout<<endl;
}
istream& operator>>(istream&is,node*&head){
    buildlist(head);
    return is;
}
ostream& operator<<(ostream &os,node *head){
    print(head);
    return os;
}
void selection_sort(node*&head){
     node*curr=head;
     node*prev=NULL;
     while(curr!=NULL){
          prev=curr->next;
          while(prev!=NULL){
              if(prev->data<curr->data){
                  swap(prev->data,curr->data);
              }
              prev=prev->next;
          }
          curr=curr->next;
     }
}
int main(){
     node* head=NULL;
     int data;
     cin>>data;
     int num;
     while(data--){
         cin>>num;
         insertAtTail(head,num);
     }
     selection_sort(head);
     print(head);
     return 0;
}
