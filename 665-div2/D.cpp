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
vector<vector<pii>> g;
vector<ll> p,cnt;
int mod = 1e9+7;
void dfs(int src, int id=-1,int nodes=0)
{
    // if(g[src].size()==1 && g[src][0].s==id)
    // {    
    //     cnt[id] += depth;
    //     return;
    // }
    for(auto x: g[src])
    {
        if(x.s==id)  continue;
        dfs(x.f,x.s,nodes+1);
        if(id!=-1)
        cnt[id] += (1+cnt[x.s]);
    } 
    if(id!=-1)
    cnt[id] += nodes;
}
void solve()
{
    g.clear(); p.clear(); cnt.clear();
    int n,x,y;  cin>>n;
    g.resize(n); cnt.resize(n-1);
    for(int i=0;i<n-1;i++)
    {
        cin>>x>>y;
        x--;y--;
        g[x].pb({y,i}); g[y].pb({x,i});
    }
    int m; cin>>m;
    p.resize(m);
    for(int i=0;i<m;i++)    cin>>p[i];
    for(int i=m;i<n-1;i++)    p.pb(1);
    dfs(0,-1);
    for(int i=0;i<n-1;i++)
    {
        cout<<cnt[i]<<" ";
    }
    cout<<endl;
    sort(cnt.begin(),cnt.end());
    sort(p.begin(),p.end());
    // reverse(cnt.begin(),cnt.end());
    ll ans=0;
    for(int i=0;i<n-1;i++)
    {
        ans = (ans + (p[i]*cnt[i])%mod)%mod;
    }
    cout<<ans<<endl;
}
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t; cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
