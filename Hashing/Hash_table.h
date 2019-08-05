#include<cstring>
using namespace std;
template<typename T>
class node{
     public:
          string key;
          T value;
          node<T>* next;
          node(string key,T v){
                this->key=key;
                value=v;
          }
          ~node(){
               if(next!=NULL){
                    delete next;
               }
          }
};
template<typename T>
class HashTable{
    int cs;///current size
    int ts;
    node<T>** buckets;
    void rehash(){
         node<T>** oldbuckets=buckets;
         int oldTs=ts;
         ts=ts*2;
         cs=0;
         buckets=new node<T>*[ts];
         for(int i=0;i<ts;i++){
             buckets[i]=NULL;
         }
         ///Read the elements from table and insert them into new table
         for(int i=0;i<oldTs;i++){
              node<T>*temp=oldbuckets[i];
              if(temp!=NULL){
                   while(temp!=NULL){
                        insert(temp->key,temp->value);
                        temp=temp->next;
                   }
            ///Delete the old table i bucket linked list
            delete oldbuckets[i];
              }
         }
         delete [] oldbuckets;
    }
    int hashFn(string key){
        int L=key.length();
        int ans=0;
        int p=1;///37^0 is 1 initially
        for(int i=0;i<L;i++){
             ans+=key[L-i-1]*p;
             p=p*37;
             p%=ts;
             ans%=ts;
        }
        return ans;

    }
    public:
        Hashtable(int ds=7){
            cs=0;
            ts=ds;
            bukets=new node<T>*[ts];
            ///Make all addresses as NULL
            for(int i=0;i<ts;i++){
                buckets[i]=NULL;
            }
        }
        void insert(string key,T value){
             ///key i need the hash index
             int i=hashFn(key);
             node<T>*n=new node<T>(key,value);
             n->next=buckets[i];
             buckets[i]=n;
             cs++;
             float load_factor=(float)cs/ts;
             if(load_factor>.7){
                  cout<<"Load Factor is "<<load_factor<<endl;
                  rehash();
             }
        }
        ///print it
        void print(){
             ///iterate over buckets array
             for(int i=0;i<ts;i++){
                  ///print the LL for each element
                  node<T>*temp=buckets[i];
                  cout<<"Buckets "<<i<<"->";
                  while(temp!=NULL){
                       cout<<temp->key<<", ";
                       temp=temp->next;
                  }
                  cout<<endl;
             }
        }
        T* search(string key){
            int i=hashFn(key);
            node<T>* temp=buckets[i];
            while(temp!=NULL){
                 if(temp->key==key){

                      return &(temp->value);
                 }
                 temp=temp->next;
            }
            return NULL;
        }
};
