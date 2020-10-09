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
vector<int> paths;
int mod = 1e9+7;
void init()
{
    for(int i=0;i<g.size();i++) g[i].clear();
    g.clear();
    vis.clear();
    paths.clear();
}
int dfs(int src,int dest)
{
    // cout<<src<<" ";
    if(src==dest)    paths[src]=1;;
    if(paths[src]!=-1)    return paths[src];
    int ans = 0;
    paths[src] = 0;
    for(auto u: g[src])
    {
        
        ans = (ans + dfs(u,dest)%mod)%mod;
    }
    // cout<<src<<" "<<ans<<endl;
    paths[src] = ans;
    return ans;
}
void solve()
{
    int n,m,src,dest; cin>>n>>m>>src>>dest;
    init();
    g.resize(n);   paths.resize(n,-1);
    src--;  dest--;
    int u,v;
    for(int i=0;i<m;i++)
    {
        cin>>u>>v;
        u--;v--;
        g[u].pb(v); 
    }
    
    cout<<dfs(src,dest)<<endl;
    // for(auto u: paths)  cout<<u<<" ";
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
