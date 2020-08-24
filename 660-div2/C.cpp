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
vi p,a,h,go;
vector<vi> g;
bool access=true;
void dfs(int s,int ancestor)
{
    a[s] = p[s];
    int sum_g=0;
    for(auto x:g[s])
    {
        if(x==ancestor)
            continue;
        dfs(x,s);
        a[s] += a[x];
        sum_g += go[x];
    }
    go[s] = (a[s]+h[s]);
    if(go[s]&1)
        access = false;
    go[s] = go[s]/2;
    if(go[s]<0 || go[s]>a[s])
        access = false;
    if(sum_g>go[s])
        access = false;
}
void solve()
{
    int n,m;
    cin>>n>>m;
    access = true;
    a.clear();p.clear();go.clear();h.clear();
    a.resize(n);p.resize(n);g.resize(n);h.resize(n);go.resize(n);
    for(int i=0;i<n;i++)
        cin>>p[i];
    
    for(int i=0;i<n;i++)
        cin>>h[i];

    int x,y;
    for(int i=0;i<n-1;i++)
    {
        cin>>x>>y;
        x--;y--;
        g[x].pb(y);
        g[y].pb(x);
    }
    dfs(0,-1);
    for(int i=0;i<n;i++)    g[i].clear();
    g.clear();
    cout<<((access)?"YES":"NO")<<endl;
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
