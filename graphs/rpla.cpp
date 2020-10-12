#include<bits/stdc++.h>
using namespace std;

#define int long long
#define f first
#define s second
#define pb push_back
#define mk make_pair
#define pii pair<int,int>
struct comp{
    bool operator() (pii a, pii b) const{
        if(a.f==b.f)
            return false;
        if(a.s==b.s)
            return a.f<b.f;
        return a.s<b.s;
    }
};
void solve()
{
    int n,m; cin>>n>>m;
    vector<vector<int>> g(n);
    int u, v;
    for(int i=0;i<m;i++)
    {
        cin>>u>>v;
        // u--; v--;
        g[v].pb(u);
    }
    vector<int> indeg(n);
    for(int i=0;i<n;i++)
    {
        for(auto u:g[i])
            indeg[u]++;
    }
    set<pii, comp> st;
    vector<int> vis(n,false);
    for(int i=0;i<n;i++)
    {
        if(!indeg[i]) {  st.insert({i,1});  vis[i]=true;}
    }
    while(!st.empty())
    {
        pii k = *st.begin();
        st.erase(k);
        cout<<k.s<<" "<<k.f<<"\n\n";
        for(auto u:g[k.f])
        {
            if(vis[u])  continue;
            indeg[u]--;
            if(!indeg[u])
            {
                vis[u]=true;
                st.insert({u,k.s+1});
            }
        }
    }

}

int32_t main()
{
    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;	cin>>t;
    for(int i=1;i<=t;i++)
    {
        cout<<"Scenario #"<<i<<":"<<"\n\n";
        solve();
    }
    return 0;
}
