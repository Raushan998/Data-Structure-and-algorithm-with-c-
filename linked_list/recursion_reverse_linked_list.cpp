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


/*
class LinkedList{
    node*head;
    node*tail;
public:
    LinkedList(){
        head = NULL;
        tail = NULL;
    }
    void insert(){

    }

};
*/
//Passing a pointer variable by reference
void insertAtHead(node*&head,int data){
    node*n = new node(data);
    n->next = head;
    head = n;
}

int length(node*head){

    int len=0;
    while(head!=NULL){
        head = head->next;
        len += 1;
    }
    return len;
}

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

void insertInMiddle(node*&head,int data,int p){

    if(head==NULL||p==0){
        insertAtHead(head,data);
    }
    else if(p>length(head)){
        insertAtTail(head,data);
    }
    else{
        //Insert in the middle
        //Take p-1 jumps
        int jump=1;
        node*temp = head;
        while(jump<=p-1){
            temp = temp->next;
            jump += 1;
        }

        node*n = new node(data);
        n->next = temp->next;
        temp->next = n;

    }
}
bool searchrecursive(node *head,int key){
    if(head==NULL){
        return false;
    }
    ///Rec case
    if(head->data==key){
        return true;
    }
    searchrecursive(head->next,key);
}
void deleteAttail(node*&head){
    node *prev=NULL;
    node* temp=head;
    while(temp->next!=NULL){
        prev=temp;
        temp=temp->next;
    }
    delete temp;
    prev->next=NULL;
    return;
}
void deleteAthead(node*&head){
    if(head==NULL){
       return;
    }
    node *temp=head;
    head=head->next;
    delete temp;
    return;
}
bool iterativesearch(node* &head,int key){
    if(head==NULL){
        return false;
    }
    while(head!=NULL){
         if(head->data==key){
             return true;
         }
         head=head->next;
    }
    return false;
}
void deleteAtmiddle(node*&head,int data){
     if(head==NULL){
         return;
     }
     else{
         node *p=head;
         node *temp;
         while(p->next!=NULL){
              if(p->next->data==data){
                  temp=p->next;
                  p->next=temp->next;
                  delete temp;
              }
              else{
              p=p->next;
             }
         }
     }
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
void reverselist(node *&head){
   node*c=head;
   node*p=NULL;
   node*n;
   while(c!=NULL){
   ///save the next node
   n=c->next;
   ///make the current node to prev
   c->next=p;
   ///just update prev and current
   p=c;
   c=n;
   }
   head=p;
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
    node *head=NULL;
    cin>>head;
    node*c=head;
    node *p=NULL;
    node *n;
    recursion_reverse_list(head,c,p,n);
    print(head);
}
