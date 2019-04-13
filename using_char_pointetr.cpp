#include <iostream>
using namespace std;
int main() {
   char ch='A';
   int *cptr=(int *)&ch;
   cout<<cptr<<endl;
   cout<<cptr+1<<endl;
   char *ccptr=&ch;
   ccptr+=1;
   cout<<(void *)&ch<<endl;
   cout<<(void *)ccptr<<endl;
    return 0;
}
