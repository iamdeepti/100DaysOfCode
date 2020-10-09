#include<bits/stdc++.h>
using namespace std;

#define int long long
#define f first
#define s second
#define pb push_back
#define mk make_pair
#define pii pair<int,int>
struct triplet
{
    int vertex,
    distance,
    edge;
};
vector<vector<pii>> g;
vector<int> weight;
struct comp{
    bool operator () (triplet t1, triplet t2) const{
        if(t1.vertex==t2.vertex)
            return false;
        if(t1.distance == t2.distance)
        {
            if(t1.edge == t2.edge)
                return t1.vertex < t2.vertex;
            return t1.edge < t2.edge;
        }
        return t1.distance<t2.distance;
    }
};
int dijikstra(int n)
{
    set<triplet,comp> st;
    st.insert({0,0,0});
    vector<int> dist(n,(int)1e9);
    dist[0] = 0;
    int ans = 0;
    while(!st.empty())
    {
        triplet t = *st.begin();
        st.erase(st.begin());
        for(auto u:g[t.vertex])
        {
            if(dist[u.f]>dist[t.vertex]+weight[u.s])
            {
                if(st.find({u.f,0,0})!=st.end())
                    st.erase(st.find({u.f,0,0}));
                dist[u.f] = dist[t.vertex]+weight[u.s];
                st.insert({u.f,dist[u.f],weight[u.s]});
            }
        }
        ans += t.edge;
    }
    return ans;
}
int prims(int n)
{
    set<int> st;
}
void solve()
{
    int n,m;    cin>>n>>m;
    g.resize(n);
    int u,v,w;
    for(int i=0;i<m;i++)
    {
        cin>>u>>v>>w;
        u--;v--;
        g[u].pb({v,i}); g[v].pb({u,i});
        weight.pb(w);
    }
    
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
