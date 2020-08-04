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
void solve()
{
    int n,m;
    cin>>n>>m;
    vi p(n);
    for(int i=0;i<n;i++)
        cin>>p[i];
    vi h(n);
    for(int i=0;i<n;i++)
        cin>>h[i];
    vector<vi> g(n);
    int x,y;
    for(int i=0;i<n-1;i++)
    {
        cin>>x>>y;
        x--;y--;
        g[x].pb(y);
        g[y].pb(x);
    }
    vi c(n);
    bool go(n);
    for(int i=0;i<n;i++)
    {
        if(h[i]>0 && !go(i))
            bfs()
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
