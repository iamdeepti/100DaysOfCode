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
    int n,m; cin>>n>>m;
    vector<string> a(n);
    vector<vector<int>> dp(n,vector<int>(m));
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        if(a[i][m-1]=='1')  dp[i][m-1]=1;
    }
    for(int i=0;i<m;i++)
    {
        if(a[n-1][i]=='1')  dp[n-1][i]=1;
    }
    for(int i=n-2;i>=0;i--)
    {
        for(int j=m-2;j>=0;j--)
        {
            if(a[i][j]=='1')
            dp[i][j] = min(dp[i][j+1],dp[i+1][j+1])+1;
        }
    }
    int ans = 0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            ans += dp[i][j];
            // cout<<dp[i][j]<<" ";
        }
        // cout<<endl;
    }
    cout<<ans<<endl;
}

int32_t main()
{
        solve();
    return 0;
}
