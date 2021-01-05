#include<bits/stdc++.h>
using namespace std;

#define int long long
#define f first
#define s second
#define pb push_back
#define mk make_pair
#define pii pair<int,int>
vector<set<int>> g;
vector<bool> vis;
vector<int> cnt;
void solve()
{
    int n; cin>>n;
    g.clear(); g.resize(n);
    cnt.clear(); cnt.resize(n,1);
    vis.clear(); vis.resize(n,false);
    for(int i=0;i<n;i++)
    {
        int u,v; cin>>u>>v;
        u--; v--;
        g[u].insert(v);
        g[v].insert(u);
    }
    queue<int> leaf;
    for(int i=0;i<n;i++)
    {
        if(g[i].size()==1)
        {   leaf.push(i);
            cnt[i]=1;
        }
    }
    vector<bool> vis(n,false);
    while(!leaf.empty())
    {
        int v = leaf.front();
        int p = *g[v].begin();
        leaf.pop();
        cnt[p] += cnt[v];
        g[p].erase(v);
        if(g[p].size()==1)
        {
            leaf.push(p);
        }
        vis[v] = true;
    }
    int ans = 0;
    for(int i=0;i<n;i++)
    {
        if(!vis[i])
        {    
            ans += ((cnt[i]*(cnt[i]-1))/2 + (n-cnt[i])*cnt[i]);
            // cout<<i<<" "<<cnt[i]<<"--";
        }
    }
    cout<<ans<<endl;
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
