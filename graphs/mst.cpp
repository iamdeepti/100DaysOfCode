#include<bits/stdc++.h>
using namespace std;

#define int long long
#define f first
#define s second
#define pb push_back
#define mk make_pair
#define pii pair<int,int>
vector<vector<pii>> g;
vector<int> weight;
vector<int> dist;
struct comp
{
    bool operator() (int u, int v) const
    {
        if(u==v)    return false;
        if(dist[u]==dist[v])    return u<v;
        return dist[u]<dist[v];
    }
};
void solve()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m; cin>>n>>m;
    g.resize(n);
    dist.resize(n,(int)1e9);
    int u,v,w;
    for(int i=0;i<m;i++)
    {
        cin>>u>>v>>w;
        u--; v--;
        g[u].pb({v,w}); g[v].pb({u,w});
    }
    // prims
    set<int, comp> st;
    dist[0] = 0;
    st.insert(0);
    vector<bool> vis(n,false);
    int ans = 0;
    while(!st.empty())
    {
        int curr = *st.begin();
        st.erase(st.begin());
        // cout<<curr<<endl;
        // to avoid self loops or cycles
        vis[curr] = true;
        for(auto u:g[curr])
        {
            if(!vis[u.f] && dist[u.f]>u.s)
            {
                auto x = st.find(u.f);
                if(x!= st.end())    st.erase(x);
                dist[u.f] = u.s;
                st.insert(u.f); 
            }
        }
        // cout<<dist[curr]<<" "<<endl;
        ans += dist[curr];
    }
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
