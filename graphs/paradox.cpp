#include<bits/stdc++.h>
using namespace std;

#define int long long
#define f first
#define s second
#define pb push_back
#define mk make_pair
#define pii pair<int,int>
vector<vector<pii>> g;
vector<bool> vis;
void init()
{
    for(int i=0;i<g.size();i++) g.clear();
    vis.clear();
}
// return false if paradox
bool dfs(int s,int start,int t=0)
{
    if(vis[s] && s==start)
    {
        // cout<<"at "<<s<<" again "<<t<<endl;
        if(t&1)
            return false;
        return true;
    }
    if(vis[s])  return true;
    // cout<<s<<" "<<t<<endl;
    vis[s] = true;
    for(auto u:g[s]){
        // if(u.f==p)  continue;
        if(u.s==0)
            return dfs(u.f,start,t+1);
        return dfs(u.f,start,t);
    }
    return true;
}
void solve(int n)
{
    // int n; cin>>n;
    int x; string str;
    init();
    g.resize(n); vis.resize(n,false);
    for(int i=0;i<n;i++)
    {
        cin>>x>>str;    x--;
        int k=0;
        if(str[0]=='t')
        {
            k = 1;
        }
        // cout<<i<<" "<<x<<"\t";
        g[i].pb({x,k});
        // g[x].pb({i,k});
    }
    // cout<<endl;
    for(int i=0;i<n;i++)
    {
        
        {
            if(!dfs(i,i))
            {
                // cout<<i<<endl;
                cout<<"PARADOX"<<endl;
                return;
            }
        }
        fill(vis.begin(),vis.end(),false);
    }
    cout<<"NOT PARADOX"<<endl;
}

int32_t main()
{
    int n;	cin>>n;
    while(n)
    {
        solve(n);
        cin>>n;
    }
    return 0;
}
