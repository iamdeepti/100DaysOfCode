#include<bits/stdc++.h>
using namespace std;

#define int long long
#define f first
#define s second
#define pb push_back
#define mk make_pair
#define pii pair<int,int>
vector<vector<int>> g;
vector<int> vis;
stack<int> st;
vector<int> recstack;
bool cyclic(int src)
{
    if(recstack[src])
        return true;
    if(vis[src])    return false;
    vis[src]= true; recstack[src] = true;
    for(auto u:g[src])
    {
        if(cyclic(u))
            return true;
    }
    recstack[src] = false;
    return false;
}
void topo(int src)
{
    if(vis[src])    return;
    vis[src] = true;
    for(auto u:g[src])
    {
        topo(u);
    }
    st.push(src);
}
void solve()
{
    int n,m; cin>>n>>m;
    g.resize(n);    vis.resize(n,false);    recstack.resize(n,false);
    int u, v;
    for(int i=0;i<m;i++)
    {
        cin>>u>>v;
        u--; v--;
        g[u].pb(v);
        
    }
    for(int i=0;i<n;i++)
    {
        if(cyclic(i))
        {
            cout<<"Sandro fails."<<endl;
            return ;
        }
    }
    vector<int> indeg(n);
    for(int i=0;i<n;i++)
    {
        vis[i] = false;
        for(auto u:g[i])
            indeg[u]++;
    }
    set<int> q;
    for(int i=0;i<n;i++)
    {
        if(!indeg[i])
        {   
            vis[i] = true; 
            q.insert(i);
        }
    }
    while(!q.empty())
    {
        int k = *q.begin();
        cout<<k+1<<" ";
        q.erase(k);
        for(auto u:g[k])
        {
            if(vis[u])  continue;
            indeg[u]--;
            // cout<<u<<"--";
            if(!indeg[u])
            {
                q.insert(u);
                vis[u]=true;
            }
        }
    }
    cout<<endl;
}

int32_t main()
{
    {
        solve();
    }
    return 0;
}
