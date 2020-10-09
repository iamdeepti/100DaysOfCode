#include<bits/stdc++.h>
using namespace std;

#define int long long
#define f first
#define s second
#define pb push_back
#define mk make_pair
#define pii pair<int,int>
vector<vector<int>> g;
vector<bool> vis;
void init()
{
    for(int i=0;i<g.size();i++) g[i].clear();
    g.clear();
}
bool dfs(int s,int p=-1)
{
    // cout<<s<<endl;
    if(vis[s])  return false;
    vis[s] = true;
    for(auto u: g[s])
    {
        if(u==p)    continue;
        if(!dfs(u,s))   return false;
    }
    return true;
}
void solve()
{
    int n, m;   cin>>n>>m;
    init();
    g.resize(n);    vis.resize(n,false);
    int u,v;
    for(int i=0;i<m;i++)
    {
        cin>>u>>v; u--; v--;
        g[u].pb(v); g[v].pb(u);
    }
    if(!dfs(0))
    {
        cout<<"NO"<<endl;
        return;
    }
    for(int i=0;i<n;i++)
    {
        if(!vis[i])
        {
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
}

int32_t main()
{
    // int t;	cin>>t;
    // while(t--)
    {
        solve();
    }
    return 0;
}
