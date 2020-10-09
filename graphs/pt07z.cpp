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
    vis.clear();
}
pii bfs(int s,int k=0)
{
    if(vis[s])  return {s,k};
    pii ans={s,k};
    vis[s] = true;
    // cout<<s<<" "<<k<<endl;
    for(auto u:g[s])
    {
        pii x = bfs(u,k+1);
        if(x.s>ans.s)
        {
            ans = x;
        }
    }
    return ans;
}
void solve()
{
    int n, u, v; cin>>n;
    g.resize(n); vis.resize(n,false);
    for(int i=0;i<n-1;i++)
    {
        cin>>u>>v;
        u--; v--;
        g[u].pb(v); g[v].pb(u);
    }
    int x = bfs(0).f;
    vis.clear();    vis.resize(n,false);
    int ans = bfs(x).s;
    cout<<ans<<endl;
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
