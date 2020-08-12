
#include<bits/stdc++.h>
using namespace std;
int ans;
vector<vector<pair<int,int>>> graph(106);
void dfs(int s,int temp,int p=-1)
{
    if(graph[s].size()==1)
    {
        // cout<<s<<" "<<temp<<endl;
        // ans = max(ans,temp);
        ans += temp;
    }
    // for(auto u:graph[s])
    for(int i=0;i<graph[s].size();i++)
    {
        pair<int,int> u = graph[s][i];
        if(u.first==p)  continue;
        
        dfs(u.first,min(temp,max(u.second,0)),s);
        temp -= min(temp,u.second);
        // prev = min(temp,max(u.second-prev,0));
    }
}
int main()
{
    int n;
    cin>>n;
    int s;
    cin>>s;
    ans=0;
    
    int a,b,c;
    for(int i=0;i<n-1;i++)
    {
        cin>>a>>b>>c;
        graph[a].push_back({b,c});
        graph[b].push_back({a,c});
        
    }
    dfs(s,108);
    cout<<ans<<endl;
    return 0;
}