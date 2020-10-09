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
void dfs(int s)
{
    if(vis[s])  return;
    vis[s] = true;
    
    for(auto v:g[s])
    {
        if(vis[v])  continue;
        dfs(v);
    }
}
void solve()
{
    int n,m,u,v; cin>>n>>m;
    for(int i=0;i<g.size();i++) g[i].clear();
    g.clear(); g.resize(n);
    vis.clear(); vis.resize(n,false);
    for(int i=0;i<m;i++)
    {
        cin>>u>>v;
        g[u].pb(v); g[v].pb(u);
    }

    // Do dfs & count connected components
    int comp=0;
    for(int i=0;i<n;i++)
    {
        if(!vis[i])
        {
            dfs(i); comp++;
        }
    }
    cout<<comp<<endl;
    
}

int32_t main()
{
    int t;	cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
