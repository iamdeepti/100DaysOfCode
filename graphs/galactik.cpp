#include<bits/stdc++.h>
using namespace std;

#define int long long
#define f first
#define s second
#define pb push_back
#define mk make_pair
#define pii pair<int,int>
vector<int> r,parent;
int findp(int x)
{
    if(parent[x]!=x)    parent[x] = findp(parent[x]);
    return parent[x];
}
void merge(int x,int y)
{
    x = findp(x); y = findp(y);
    if(x==y)    return;
    if(r[x]>r[y])
    {
        parent[y] = x;
        // r[x]++;
    }
    else
    {
        parent[x] = y;
        // r[y]++; 
        if(r[x]==r[y])
        {
            r[y]++;
        }
    }
    
}

void solve()
{
    std::ios::sync_with_stdio(false),cin.tie(NULL),cout.tie(NULL);
    int n,m;
    cin>>n>>m;
    r.resize(n);
    parent.resize(n);
    for(int i=0;i<n;i++)
        parent[i] = i;
    int u,v;
    for(int i=0;i<m;i++)
    {
        cin>>u>>v;
        u--; v--;
        merge(u,v);
    }
    // vector<int> mini;
    // vector<int> vis(n,false);
    map<int,int> mp;
    int sum = 0, x=1e6,k=0;
    int w;
    for(int i=0;i<n;i++)
    {
        cin>>w;
        if(w<0)
            w = 1e8;
        int p = findp(i);
        if(mp.find(p)==mp.end())
         {   mp.insert({p,w});
            // cout<<p<<endl;
         k++;
         }
        else
        {
            mp[p] = min(mp[p],w);
            
        }
        x = min(x,w);
    }
    if(k==1)
    {
        cout<<0<<endl;
        return;
    }
    // for(auto j:parent)
    //     cout<<j<<"\t";
    // cout<<endl;
    for(auto it:mp)
    {
        sum += it.s;
        if(it.s > 10000)
        {
            cout<<-1<<endl;
            return;
        }
    }
    cout<<x*(k-2)+sum<<endl;
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
