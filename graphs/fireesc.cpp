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
void dfs(int s,int &k)
{
    if(vis[s])  return ;
    k++;
    vis[s] = true;
    for(auto u:g[s])
    {
        if(vis[u]) continue;
        dfs(u,k);
    }
    
}
void solve()
{
    int n,m,u,v; cin>>n>>m;
    g.resize(n); vis.resize(n,false);
    for(int i=0;i<m;i++)
    {
        cin>>u>>v;
        u--; v--;
        g[u].pb(v); g[v].pb(u);
    }
    int comp = 0,ans=1,mod = 1e9+7;
    for(int i=0;i<n;i++)
    {
        if(!vis[i]) 
        {
            int k = 0;
            dfs(i,k);
            ans =  (ans*(k%mod))%mod;
            comp++;
        }
    }
    cout<<comp<<" "<<ans<<endl;
    vis.clear();
    g.clear();
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
