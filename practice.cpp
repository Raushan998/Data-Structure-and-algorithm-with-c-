#include <string>
#include <vector>
#include <algorithm>
#include<iostream>
#include<iostream>
using namespace std;

// A comparison function which is used by sort() in printLargest()
int myCompare(string X, string Y)
{
    // first append Y at the end of X
    string XY = X.append(Y);

    // then append X at the end of Y
    string YX = Y.append(X);

    // Now see which of the two formed numbers is greater
    return XY.compare(YX) > 0 ? 1: 0;
}
void printLargest(vector<string> arr)
{
    sort(arr.begin(), arr.end(), myCompare);

    for (int i=0; i < arr.size() ; i++ )
        cout << arr[i];
}


int main()
{
    int t;
    cin>>t;
    if(t>=1 && t<=100){
    while(t--){
    vector<string>arr;
    arr.reserve(100000);
    int m;
    cin>>m;

    for(int i=0;i<m;i++){
        int j;
        cin>>j;
        arr.push_back(to_string(j));
    }
     printLargest(arr);
     cout<<endl;
    }
    }

   return 0;
}
