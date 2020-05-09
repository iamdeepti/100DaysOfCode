#include<bits/stdc++.h>
using namespace std;
struct trie{
    int count;
    bool isend;
    trie * children[26];
};
trie* getNode()
{
    trie * tmp = new trie;
    tmp->count = 0;
    tmp->isend = false;
    for(int i=0;i<26;i++)
        tmp->children[i] = NULL;
    return tmp;
}
void insert(trie * root, string s)
{
    trie * tmp = root;
    int n = s.length();
    for(int i=0;i<n;i++)
    {
        if(!tmp->children[s[i]-'a'])
            tmp->children[s[i]-'a'] = getNode();
        tmp = tmp->children[s[i]-'a'];
        tmp->count += 1;
    }
    tmp->isend = true;
}
void calc(trie * root, vector<string> &res,string s)
{
    if(!root)
        return;
    if(root->isend)
    {
        if(s.length()!=0)
            res.push_back(s);
        return;
    }
    for(int i=0;i<26;i++)
    {
        s.push_back('a'+i);
        calc(root->children[i],res,s);
        s.pop_back();
        }
}
vector<string> func(vector<string> &words)
{
    trie * root = getNode();
        for(auto x: words)
            insert(root,x);
        vector<string> res;
        string s;
        calc(root,res,s);
        return res;
}


int main()
{
    int n;
    cin>>n;
    vector<string> words(n);
    for(int i=0;i<n;i++)
    {
        cin>>words[i];
    }
    vector<string> res = func(words);
    for(int i=0;i<res.size();i++)
    {
        cout<<res[i]<<" ";
    }
    cout<<endl;
    return 0;
}