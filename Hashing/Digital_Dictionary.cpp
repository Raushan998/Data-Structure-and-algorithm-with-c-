#include <bits/stdc++.h>
    using namespace std;
    unordered_map<string, int>pp,kk;
    class trie
    {
       public:
        trie** children;

        trie()
        {
            children=new trie*[26];
            for( int i=0; i<26;++i)
                children[i]=NULL;
        }
    };

    void insert( string s, trie *root)
    {
        if(s.empty())
            return;
        int indx=s[0]-'a';
        trie* child;
        child=root->children[indx];
        if(child==NULL)
        {
            child=new trie();
            root->children[indx]=child;

        }

        insert( s.substr(1), child);
    }
    void print( string s, trie * root)
    {
        bool k=false;
        for( int i=0; i<26;++i)
        {
            if(root->children[i]!=NULL)
            {
                k=true;
                break;
            }
        }

        if(!k && kk.find(s)==kk.end())
        {
            cout<<s<<"\n";
            kk[s]++;
            return;
        }

        for( int i=0; i<26;++i)
        {
            if(root->children[i]!=NULL)
            {
                char c='a'+i;
                string k(1,c);
                s=s+k;
                if(pp.find(s)!=pp.end() && kk.find(s)==kk.end())
                {
                    cout<<s<<"\n";
                    kk[s]++;
                }
                print(s, root->children[i]);
                s=s.substr(0,s.size()-1);
            }
        }


        return;


    }
    int   search(string s, trie* root)
    {

        trie*cur=root;
        for( int i=0; i<s.length();++i)
        {
            int indx=s[i]-'a';
            trie*child=cur->children[indx];
            if(child==NULL)
                return -1;
            else
            {

                cur=child;
            }
        }
        if(pp.find(s)!=pp.end())
        {
            cout<<s<<"\n";
            kk[s]++;
        }


      print(s,cur);
       return 0;
    }

    int main()
    {
        int n, m;
        cin>>n;
        trie* root=new trie();
        while(n--)
        {
            string s;
            cin>>s;
            pp[s]++;
            insert(s, root);
        }
        cin>>m;
        while(m--)
        {
            string s;
            cin>>s;
            kk.clear();
            if(search(s, root)==-1)
            {  insert(s,root);
            pp[s]++;
                cout<<"No suggestions\n";
            }

        }


        return 0;
    }


