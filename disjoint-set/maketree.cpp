#include<bits/stdc++.h>
using namespace std;

#define int long long
#define f first
#define s second
#define pb push_back
#define mk make_pair
#define pii pair<int,int>
const int N = 1e5;
vector<int> g[N];
int indeg[N]={0};
void solve()
{
    int n,k,m,u; cin>>n>>k;
    for(int i=1;i<=k;i++)
    {
        cin>>m;
        for(int j=0;j<m;j++)
        {
            cin>>u;
            g[i].pb(u);
            indeg[u]++;
        }
    }
    queue<int> q,st;   vector<int> vis(n+1,false);
    for(int i=1;i<=n;i++)
    {
        if(!indeg[i])
        {
            q.push(i);
            vis[i] = true;
        }
    }
    while(!q.empty())
    {
        int curr = q.front(); q.pop();
        st.push(curr);
        for(auto u:g[curr])
        {
            if(vis[u])  continue;
            // cout<<u<<" "<<indeg[u]<<"\t";
            indeg[u]--;
            if(!indeg[u])
            {
                q.push(u);
                vis[u] = true;
            }
        }
    }
    int prev = 0;
    vector<int> parent(n+1);
    while(!st.empty())
    {
        int curr = st.front(); st.pop();
        // cout<<curr<<"--";
        parent[curr] = prev;
        prev = curr;
    }
    // cout<<"\n";
    for(int i=1;i<=n;i++)
    {
        cout<<parent[i]<<"\n";
    }
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
