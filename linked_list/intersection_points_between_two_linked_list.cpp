#include<iostream>
using namespace std;
class node{
public:
    int data;
    node* next;
    ///constructor
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
void print(node*&head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}
ostream& operator<<(ostream &os,node *head){
     print(head);
     return os;
}
int length(node*&head){
    int len=0;
    while(head!=NULL){
        head=head->next;
        len+=1;
    }
    return len;
}
void insert1(node*&head,node*&head1){
     node* curr=head;
     node* prev=head1;
     int d1=length(head);
     int d2=length(head1);
     int p;
     d1>d2?p=d1-d2:p=d2-d1;
     while(p--){
         if(d1>d2){
              curr=curr->next;
         }
        else if(d1<d2){
              prev=prev->next;
         }
     }
    while(prev!=NULL && curr!=NULL){
         if(prev->data==curr->data && prev->next->data==curr->next->data && prev->next!=NULL && curr->next!=NULL){
             cout<<prev->data<<endl;
             return;
         }
         prev=prev->next;
         curr=curr->next;
    }
    cout<<"-1"<<endl;
    return;
}
int main(){
    node* head1=NULL;
    node* head=NULL;
    int data,data1;
    cin>>data;
    int num;
    while(data--){
       cin>>num;
       insertAtTail(head,num);
    }
    cin>>data1;
    while(data1--){
        cin>>num;
        insertAtTail(head1,num);
    }
    insert1(head,head1);
}
