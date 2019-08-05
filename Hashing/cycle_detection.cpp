#include <iostream>
#include<unordered_map>
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
//Passing a pointer variable by reference
void insertAtHead(node*&head,int data){
    node*n = new node(data);
    n->next = head;
    head = n;
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


bool findcycle(node* head){
     node* temp=head;
     ///kkey is the address of type node*,bool denotes or not seen that node
     unordered_map<node* ,bool>m;
     while(temp!=NULL){
         if(m[temp]==true){
             cout<<"cycle found"<<endl;
             return true;
         }
         m[temp]=true;
         temp=temp->next;
     }
     return false;
}
///cycle detection and removal (floyd's cycle)
bool detectcycle(node* head){
     node *slow=head;
     node * fast=head;
     while(fast!=NULL && fast->next!=NULL){
         fast=fast->next->next;
         slow=slow->next;
         if(fast->data==slow->data){
             return true;
         }
     }
     return false;
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

int main() {
    node*head = NULL;
  //  node *head1=NULL;
    buildlist(head);
    head->next->next->next->next->next->next=head->next;
    print(head);
    if(findcycle(head)){
         cout<<"linked list is circular"<<endl;
    }
    else{
         cout<<"linked list is not circular"<<endl;
    }
 //   buildlist(head);
  //  print(head);
    /*insertAtHead(head,5);
    insertAtHead(head,4);
    insertAtHead(head,3);
    insertAtTail(head,6);
    insertInMiddle(head,2,3);
     print(head);*/
  //  deleteAttail(head);
   // deleteAthead(head);
    //deleteAtmiddle(head,5);
  /*  if(searchrecursive(head,20)){
        cout<<"Element is found"<<endl;
    }
    else{
        cout<<"Element is not found"<<endl;
    }
    if(iterativesearch(head,3)){
        cout<<"Element is found"<<endl;
    }
    else{
        cout<<"Element is not found"<<endl;
    }*/

    return 0;
}
