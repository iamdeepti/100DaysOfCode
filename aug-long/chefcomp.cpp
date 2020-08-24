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
vector<vi> g;
vi a,b,p,res;
vector<bool> vis;
void dfs(int s,int p,int j,int day=1)
{
    // if(b[s]==0)
    // if(res[s]!=0)
    // {
    //     res[s]=day;
    //     // return;
    // }
    // b[s] -= min(b[s],a[j]);
    // if(b[s]==0 && res[s]==0)
    //     res[s] = day;
    // else if(b[s]!=0)
    // {
    //     cout<<s<<":"<<a[s]<<" "<<b[s]<<endl;
    //     res[s] = -1;
    // }
    for(auto x:g[s])
    {
        if(vis[x] || x==p)    continue;
        b[x] -= min(b[x],a[j]);
        if(b[x]==0)
            res[x] = day;
        dfs(x,s,j,day);
    }
    vis[s]=true;
}
void solve()
{
    int n,x,y;  cin>>n;
    g.resize(n);    a.resize(n); b.resize(n); p.resize(n);res.resize(n);
    for(int i=0;i<n-1;i++)
    {
        cin>>x>>y;
        x--;y--;
        g[x].pb(y);
        g[y].pb(x);
    }
    for(int i=0;i<n;i++)    cin>>p[i];
    for(int i=0;i<n;i++)    cin>>a[i];
    for(int i=0;i<n;i++)    cin>>b[i];
    vis.resize(n,false);
    int day=1;
    for(int i=0;i<n;i++)
    {
        // for(auto x:g[i])
        // {
        //     if(!vis[x])
        //     {
        //         b[x] -= min(a[x],b[x]);
        //     }
        // }
        // b[p[i]-1] -= min(a[p[i]-1],b[p[i]-1]);
        // cout<<b[p[i]-1]<<" "<<res[p[i]-1]<<endl;
        // if(res[p[i]-1]==0 && b[p[i]-1]==0)
        //     res[p[i]-1] = day;
        // else if(b[p[i]-1])
        //     res[p[i]-1] = -1;
        // dfs(p[i]-1,-1,p[i]-1,day);
        int k = p[i]-1;
        b[k] -= min(b[k],a[k]);
        if(b[k]==0 && res[k]==0)
            res[k]=day;
        else if(b[k]!=0)
            res[k]=-1;
        dfs(k,-1,k,day);
        day++;
    }
    for(auto x:res)
        cout<<x<<" ";
    cout<<endl;
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
