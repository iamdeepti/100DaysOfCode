#include<bits/stdc++.h>
 
using namespace std;
 
#define ll long long 
#define ld long double
#define f first
#define s second
#define pii pair<int,int>
#define pb push_back
#define mk make_pair
#define vi vector<int>
vector<set<int>> tree,leaves;
struct comp{
    bool operator() (int a,int b) const{
        if(leaves[a].size()==leaves[b].size()) return a<b;
        return leaves[a].size() > leaves[b].size();
    }
};
void solve()
{
    int n,k,x,y;
    cin>>n>>k;
    tree.resize(n);leaves.resize(n);
    for(int i=0;i<n-1;i++)
    {
        cin>>x>>y;
        x--;y--;
        tree[x].insert(y);
        tree[y].insert(x);
    }
    for(int i=0;i<n;i++)
    {
        if(tree[i].size()==1)
        {
            leaves[*tree[i].begin()].insert(i);
        }
    }
    set<int,comp> temp;
    for(int i=0;i<n;i++)
    {
        temp.insert(i);
    }
    int ans=0;
    while(true)
    {
        int v = *temp.begin();
        if(leaves[v].size()<k)  break;
        for(int i=0;i<k;i++)
        {
            int leaf = *leaves[v].begin();
            tree[leaf].erase(v);
            tree[v].erase(leaf);
            
            temp.erase(leaf);
            temp.erase(v);
            leaves[v].erase(leaf);
            if(leaves[leaf].count(v))   leaves[leaf].erase(v);
            if(tree[v].size()==1)
            {
                int to = *tree[v].begin();
                temp.erase(to);
                leaves[to].insert(v);
                temp.insert(to);
            }
            temp.insert(leaf);
            temp.insert(v);
        }
        ans +=1;
    }
    cout<<ans<<endl;
    tree.clear();leaves.clear();
}
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
