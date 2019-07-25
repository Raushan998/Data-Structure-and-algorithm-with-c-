#include<iostream>
using namespace std;
class node{
public:
    int data;
    node* next;

    //Constructor
    node(int d){
        data = d;
        next = NULL;
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
node* k_reverse(node* &head,int k){
       node *current=head;
       node *prev=NULL;
       node*next=NULL;
       int count=0;
       while(current!=NULL && count<k){
            next=current->next;
            current->next=prev;
            prev=current;
            current=next;
            count+=1;
       }
       if(next!=NULL){
            head->next=k_reverse(current,k);
       }
       return prev;
}
int main(){
    node* head=NULL;
    int data;
    cin>>data;
    int k;
    cin>>k;
    int num;
    while(data--){
        cin>>num;
        insertAtTail(head,num);
    }
    head=k_reverse(head,k);
    print(head);
    return 0;
}
