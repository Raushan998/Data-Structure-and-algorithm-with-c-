#include<iostream>
using namespace std;
class node{
  public:
      int data;
      node *next;
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
void recursion_reverse_list(node* &head,node* &c,node* &p,node* &n){
   if(c==NULL){
       head=p;
       return;
   }
   n=c->next;
   c->next=p;
   p=c;
   c=n;
   recursion_reverse_list(head,c,p,n);
}
bool ispalindrome(node*&head,node*&head1){
    while(head!=NULL && head1!=NULL){
         if(head->data!=head1->data){
              return false;
         }
         head=head->next;
         head1=head1->next;
    }
    return true;
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
        cout<<head->data<<"->";
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
int main(){
    node* head=NULL;
    node* head1=NULL;
    int data;
    cin>>data;
    int num;
    while(data--){
       cin>>num;
       insertAtTail(head,num);
       insertAtTail(head1,num);
    }
    node*c=head;
    node *p=NULL;
    node *n;
    recursion_reverse_list(head,c,p,n);
    print(head);
    print(head1);
    if(ispalindrome(head,head1)){
        cout<<"True";
    }
    else{
        cout<<"False";
    }
    return 0;
}

