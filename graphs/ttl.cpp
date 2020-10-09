#include<bits/stdc++.h>
using namespace std;

#define int long long
#define f first
#define s second
#define pb push_back
#define mk make_pair
#define pii pair<int,int>
vector<vector<int>> g;
pii bfs(int src)
{
    vector<bool> vis(g.size());
    queue<pii> q;
    pii ans = {0,0};
    q.push({src,0});
    while(!q.empty())
    {
        int u = q.front().f, k = q.front().s;
        q.pop();
        vis[u] = true;
        for(auto v:g[u])
        {
            if(vis[v])  continue;
            q.push({v,k+1});
        }
        if(ans.s<k)
            ans = {u,k};
    }
    return ans;
}
void init()
{
    for(int i=0;i<g.size();i++) g[i].clear();
    g.clear();
}
void solve()
{
    int n,m; cin>>n;
    init();
    g.resize(n);
    int u,v;
    for(int i=0;i<n-1;i++)
    {
        cin>>u>>v;
        g[u].pb(v);
        g[v].pb(u);
    }
    int src = 0;
    for(int i=0;i<n;i++)
    {
        if(g[src].size()<g[i].size())
            src = i;
    }
    // cout<<dfs(src)<<endl;
    int x = bfs(0).f;
    int ans = bfs(x).s;
    // if(ans&1)
    //     cout<<ans/2 +1<<endl;
    // else
    // {
    //     cout<<ans/2<<endl;
    // }
    cout<<(ans+1)/2<<endl;
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
