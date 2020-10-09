#include<bits/stdc++.h>
using namespace std;

#define f first
#define s second
#define pb push_back
#define mk make_pair
#define pii pair<int,int>
void solve()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int floor,start,g,u,d;
    cin>>floor>>start>>g>>u>>d;
    queue<pii> q;   q.push({start,0});
    vector<bool> vis(floor+1,false);
    vis[start] = true;
    while(!q.empty())
    {
        int curr = q.front().f;
        int level = q.front().s;
        
        q.pop();
        if(curr==g)
        {
            cout<<level<<endl;
            return;
        }
        if(curr+u<=floor && !vis[curr+u])
         {   q.push({curr+u,level+1});
            vis[curr+u] = true;
         }
        if(curr-d>=1 && !vis[curr-d])
        {    q.push({curr-d,level+1});
            vis[curr-d]=true;
        }
    }
    cout<<"use the stairs"<<endl;
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
