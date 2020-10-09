#include<bits/stdc++.h>
using namespace std;

#define int long long
#define f first
#define s second
#define pb push_back
#define mk make_pair
#define pii pair<int,int>
vector<vector<int>> g;
vector<int> primes;
map<int,int> mp;
void sieve()
{
    bool prime[10000];

    memset(prime,true,sizeof(prime));
    prime[1]=false;
    for(int i=2;i<=9999;i++)
    {
        if(prime[i])
        {
            if(i>=1000)
            primes.pb(i);
            for(int j=i*i;j<=9999;j+=i)
                prime[j] = false;
        }
    }
}
// returns true if only one digit differs
bool check(int x,int y)
{
    string x1 = to_string(x), y1 = to_string(y);
    int k =0 ;
    for(int i=0;i<4;i++)
    {
        if(x1[i]!=y1[i])    k++;
    }
    if(k==1)    return true;
    return false;
}
void bfs(int src,int dest)
{
    int i = mp[src], j = mp[dest];
    queue<pii> q;
    vector<bool> vis(primes.size(),false);
    // vector<int>parent(primes.size());
    q.push({i,0});
    while(!q.empty())
    {
        int curr = q.front().f;
        int level = q.front().s;
        q.pop();
        // cout<<primes[curr]<<" ";
        if(curr == j)
        {
            cout<<level<<endl;
            // while(curr!=i)
            // {
            //     cout<<primes[parent[curr]]<<" ";
            //     curr = parent[curr];
            // }
            return ;
        }
        vis[curr] = true;
        for(auto u:g[curr])
        {
            if(vis[u])  continue;
            // parent[u] = curr;
            q.push({u,level+1});
        }
        
    }
    cout<<"Impossible"<<endl;
}
void adjList()
{
    g.resize(primes.size());
    int k=0;
    for(auto u:primes)
    {
        mp[u] = k;
        k++;
    }
    int n = primes.size();
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(check(primes[i],primes[j]))
            {
                g[i].pb(j); g[j].pb(i);
                // cout<<primes[i]<<" "<<primes[j]<<endl;
            }
        }
    }
}
void solve()
{
    int src,dest; cin>>src>>dest;
    bfs(src,dest);
}

int32_t main()
{
    int t;	cin>>t;
    sieve();    adjList();
    while(t--)
    {
        solve();
    }
    return 0;
}
