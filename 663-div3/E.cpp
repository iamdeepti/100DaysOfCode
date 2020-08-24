#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define ld long double
#define f first
#define s second
#define pii pair<ll,int>
#define pb push_back
#define mk make_pair
#define vi vector<int>
vector<vector<pii>> g;
int ans=0;
vi cnt,w;
struct comp{
    bool operator() (pii a,pii b) const{
        if(a.f == b.f)
            return a.s>b.s;
        return a.f>b.f;
    } 
};
void dfs(int u,int p=-1)
{
    if(g[u].size()==1)
    {
        if(p!=-1) cnt[p]=1;
    }
    for(auto x:g[u])
    {
        int v = x.f,id=x.s;
        if(id==p)   continue;
        dfs(v,id);
        if(p!=-1)   cnt[p] += cnt[id];
    }
}
ll getdiff(int i)
{
    return w[i]*1ll*cnt[i] - (w[i]/2)*1ll*cnt[i];
}
void solve()
{
    int n,x,y,z;
    ll S;
    cin>>n>>S;
    g = vector<vector<pii>> (n);
    cnt = w = vi(n-1);
    for(int i=0;i<n-1;i++)
    {
        cin>>x>>y>>w[i];
        x--;y--;
        g[x].pb(mk(y,i));
        g[y].pb(mk(x,i));
    }
    dfs(0);
    set<pair<ll,int>,comp> st;
    ll curr=0;
    for(int i=0;i<n-1;i++)
    {
        st.insert({getdiff(i),i});
        curr += w[i]*1ll*cnt[i];
    }
    int ans=0;
    while(curr>S)
    {
        int i = (st.begin()->s);
        st.erase(st.begin());
        curr -= getdiff(i);
        w[i]/=2;
        st.insert({getdiff(i),i});
        ans++;
    }
    cout<<ans<<endl;
}
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
