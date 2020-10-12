#include<bits/stdc++.h>
using namespace std;

#define int long long
#define f first
#define s second
#define pb push_back
#define mk make_pair
#define pii pair<int,int>
const int N = 2e4+5;
int ans=0;
int children[N] = {0},p[N],r[N];
int parent(int x)
{
    if(p[x]!=x)
        p[x] = parent(p[x]);
    return p[x];
}
void merge(int x, int y)
{
    int px = parent(x), py = parent(y);
    if(px==py)
        return ;
    if(r[px]>r[py])
    {
        ans -= children[py]*children[px];
        p[py] = px;
        children[px] += children[py];
        children[py] = 0;
    }
    else
    {
        ans -= children[py]*children[px];
        children[py] += children[px];
        children[px] = 0;
        p[px] = py;
        if(r[px]==r[py])
            r[py]++;
    }
    
}
void solve()
{
    // memset(children,0,sizeof(children));
    int n, u, v; cin>>n;
    vector<pii> edges;
    ans = (n*(n-1))/2;
    for(int i=0;i<n-1;i++)
    {
        cin>>u>>v;
        edges.pb({u,v});
    }
    // intialize rank parents and children
    // children[i] stores no of children having parent i
    for(int i=0;i<n;i++)
    {
        p[i]=i; r[i]=0; children[i]=1;
    }
    vector<int> queries;
    char ch;
    int q; cin>>q;
    vector<bool> vis(n,false);
    for(int i=0;i<q;i++)
    {
        cin>>ch;
        if(ch=='Q') queries.pb(0);
        else{
            cin>>u; queries.pb(u);
            vis[u-1] = true;
        }
    }
    for(int i=0;i<n-1;i++)
    {
        if(!vis[i])
            merge(edges[i].f,edges[i].s);
    }
    vector<int> res;
    for(auto it=queries.rbegin();it!=queries.rend();it++)
    {
        if(*it == 0)
            res.pb(ans);
        else
        {
            int k = *it;
            merge(edges[k-1].f,edges[k-1].s);
        }
        
    }
    for(auto it=res.rbegin();it!=res.rend();it++)
        cout<<(*it)<<"\n";
    
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
