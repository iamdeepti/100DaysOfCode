#include<bits/stdc++.h>
 
using namespace std;
 
#define ll long long 
#define ld long double
#define f first
#define s second
#define pii pair<int,int>
#define pb push_back
#define mk make_pair
void top(vector<vector<int>> &g,int m,int n,vector<int> &res,int s,vector<bool> &vis)
{
    if(vis[s])
    return;
    vis[s]=true;
    for(auto u:g[s])
        top(g,m,n,res,u,vis);
    res.pb(s);
}
void solve()
{
    int n,m;
        cin>>n>>m;
        int x,y,ti;
        vector<vector<int>> g(n+1);
        vector<int> indeg(n+1);
        // vector<int> outdeg(n+1);
        vector<pii> edge;
        for(int i=0;i<m;i++)
        {
            cin>>ti>>x>>y;
            if(ti==1)
            {
                g[x].pb(y);
                indeg[y]++;
                // outdeg[x]++;
            }
            else{
                edge.pb(mk(x,y));
            }
        }
        vector<bool> vis(n+1,false);
        int i=1;
        vector<int> res;
        
        for(i=1;i<=n;i++)
        {
            if(indeg[i]==0 && !vis[i])
                top(g,m,n,res,i,vis);
                
        }
        if(res.size()<n){
            cout<<"NO"<<endl;
            return;
        }
        // for(auto x:res)
        //     cout<<x<<" ";
        // cout<<endl;
        cout<<"YES"<<endl;
        for(auto p:edge)
        {
            for(int i=n-1;i>=0;i--)
            {
                if(p.f==res[i])
                {
                     g[res[i]].pb(p.s);
                    // cout<<res[i]<<" "<<p.s<<endl;
                    break;
                }
                else if(p.s==res[i])
                {
                     g[res[i]].pb(p.f);
                    // cout<<res[i]<<" "<<p.f<<endl;
                    break;
                }
            }
        }
        
        for(int i=1;i<=n;i++)
        {
            for(auto v:g[i])
            {
                cout<<i<<" "<<v<<endl;
            }
        }

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
