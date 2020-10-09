#include<bits/stdc++.h>
using namespace std;

#define int long long
#define f first
#define s second
#define pb push_back
#define mk make_pair
#define pii pair<int,int>
void solve()
{
    string str; cin>>str;
    int n = str.length();
    vector<vector<int>> seq(10);
    for(int i=0;i<n;i++)
    {
        seq[str[i]-'0'].pb(i);
    }
    queue<pii> q;
    vector<bool> vis(n,false);
    vis[0] = true;
    q.push({0,0});
    while(!q.empty())
    {
        int curr = q.front().f;
        int level = q.front().s;
        q.pop();
        if(curr == n-1)
        {
            cout<<level<<endl;
            return;
        }
        if(curr+1<n && !vis[curr+1])
        {
            vis[curr+1] = true;
            q.push({curr+1,level+1});
        }
        if(curr>=1 && !vis[curr-1])
        {
            vis[curr-1] = true;
            q.push({curr-1,level+1});
        }
        for(auto u:seq[str[curr]-'0'])
        {
            if(vis[u])  continue;
            vis[u] = true;
            q.push({u,level+1});
        }
        seq[str[curr]-'0'].clear();
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
