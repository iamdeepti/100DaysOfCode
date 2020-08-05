#include<bits/stdc++.h>
using namespace std;
#define ll long long 
#define ld long double
#define f first
#define s second
#define pii pair<int,ll>
#define pb push_back
#define mk make_pair
#define vi vector<int>
vector<vector<pii>> g;
int ans=0;
void bfs(ll st,int n)
{
    queue<int> q;
    q.push(0);
    vector<bool> vis(n,false);
    int moves=0;
    while(!q.empty())
    {
        int cur = q.front();
        q.pop();
        vis[curr]=true;
        for(auto x: g[curr])
        {
            if(!vis[x.f])
            {
                while(x.s>st)
                {
                    x.s = x.s/2;
                    
                }
            }
        }
    }
}
void solve()
{
    int n,x,y,z;
    ll s;
    cin>>n>>s;
    g.resize(n);
    for(int i=0;i<n;i++)
    {
        cin>>x>>y>>z;
        x--;y--;
        g[x].pb(mk(y,z));
        g[y].pb(mk(x,z));
    }
    bfs
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
