#include<bits/stdc++.h>
using namespace std;

#define int long long
#define f first
#define s second
#define pb push_back
#define mk make_pair
#define pii pair<int,int>
int c,r;
int arr[4][2] = {{1,0},{-1,0},{0,1},{0,-1}};
vector<vector<char>> mat;
vector<vector<bool>> vis;
void init()
{
    for(int i=0;i<mat.size();i++)   mat[i].clear();
    for(int i=0;i<vis.size();i++)   vis[i].clear();
    
    mat.clear();    vis.clear();
    mat.resize(r,vector<char>(c));
    vis.resize(r,vector<bool>(c,false));
    
}
int dfs1(int i,int j,int pi=-1, int pj=-1, int k = 0)
{
    if(i>=r || i<0 || j>=c || j<0)  return k-1;
    if(mat[i][j]=='#') return k-1;
    vis[i][j] = true;
    // int ans = 0;
    // cout<<i<<" "<<j<<" "<<k<<endl;
    int ans = 0;
    for(int l=0;l<4;l++)
    {
        if(i+arr[l][0]==pi && j+arr[l][1]==pj)  continue;
        ans = max(ans,dfs1(i+arr[l][0],j+arr[l][1],i,j,k+1));
    }
    // int ans = max(max(dfs(i+1,j,i,j,k+1),dfs(i-1,j,i,j,k+1)),max(dfs(i,j+1,i,j,k+1),dfs(i,j-1,i,j,k+1)));
    return ans;
}
pair<pii,int> dfs2(int i,int j,int pi=-1, int pj=-1, int k = 0)
{
    if(i>=r || i<0 || j>=c || j<0)  return {{pi,pj},k-1};
    if(mat[i][j]=='#') return {{pi,pj},k-1};
    // int ans = 0;
    // cout<<i<<" "<<j<<" "<<k<<endl;
    pair<pii,int> ans = {{i,j},k};
    int curr = k;
    for(int l=0;l<4;l++)
    {
        if(i+arr[l][0]==pi && j+arr[l][1]==pj)  continue;
        // ans = max(ans,dfs2(i+arr[l][0],j+arr[l][1],i,j,k+1));
        // if(dfs2(i+arr[l][0],j+arr[l][1],i,j,k+1))
        auto y = dfs2(i+arr[l][0],j+arr[l][1],i,j,k+1);
        if(ans.s < y.s)
            ans = y;
    }
    // int ans = max(max(dfs(i+1,j,i,j,k+1),dfs(i-1,j,i,j,k+1)),max(dfs(i,j+1,i,j,k+1),dfs(i,j-1,i,j,k+1)));
    return ans;
}
void solve()
{
    cin>>c>>r;
    init();
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
            cin>>mat[i][j];
    }
    // vector<int> edges;
    int ans = 0;
    pii x = {0,0};
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(!vis[i][j])
            {    
                x = dfs2(i,j).f;
                ans = max(ans,dfs1(x.f,x.s));
            }
        }
    }
    cout<<"Maximum rope length is "<<ans<<"."<<endl;
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
