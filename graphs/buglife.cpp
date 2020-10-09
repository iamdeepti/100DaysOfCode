#include<bits/stdc++.h>
using namespace std;

#define int long long
#define f first
#define s second
#define pb push_back
#define mk make_pair
#define pii pair<int,int>
vector<vector<int>> g;
vector<bool> vis;
vector<int> comp;
bool dfs(int s,int k = 0)
{
    // cout<<"here "<<s<<comp[s]<<" "<<k<<endl;
    // cout<<s<<":"<<k<<" "<<comp[s]<<endl;
    if(comp[s]== (k^1))
        return false;
    if(comp[s]==k)
        return true;
    //  cout<<s<<" "<<k<<endl;
    comp[s] = k;
    for(auto u: g[s])
    {
        
        if(!dfs(u,(k^1)))
            return false;
        // if((comp[u]^s)==0)  return false;
    }
    return true;
}
void solve()
{
    int n, m; cin>>n>>m;
    // cout<<n<<" "<<m<<endl;
    for(int u=0;u<g.size();u++) g[u].clear(); g.clear(); comp.clear();
    g.resize(n);  comp.resize(n,-1);
    int u,v;
    for(int i=0;i<m;i++)
    {
        cin>>u>>v;
        u--;v--;
        g[u].pb(v); g[v].pb(u);
    }
    for(int i=0;i<n;i++)
    {
        // cout<<comp[i]<<":"<<i<<endl;
        if(comp[i]==-1)
        {    
            // cout<<"dfs"<<endl;
            if(!dfs(i))
            {
                cout<<"Suspicious bugs found!"<<endl;
                return;
            }
        }
    }
    // for(auto u:comp)
    //     cout<<u<<"\t";
    // cout<<endl;
    cout<<"No suspicious bugs found!"<<endl;
    // for(int i =0;i<n;i++)   g[i].clear();
    // g.clear(); comp.clear();
}

int32_t main()
{
    int t;	cin>>t;
    for(int i=1;i<=t;i++)
    {
        cout<<"Scenario #"<<i<<":"<<endl;
        solve();
    }
    return 0;
}
