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
    int n,k;
    cin>>n>>k;
    vi a(n+1);
    map<int,int> mp;
    vector<vi> conflicts(n+1,vi(n+1));
    vector<vi> dp(1001,vi(n+1));
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    int tables = 100;
    for(int i=1;i<=n;i++)
    {
        mp.clear();
        for(int j=i;j<=n;j++)
        {
            conflicts[i][j]=conflicts[i][j-1];
            if(mp.count(a[j])!=0)
            {
                if(mp[a[j]]==1)
                    conflicts[i][j]++;
                conflicts[i][j]++;
                // cout<<"here";
            }
            mp[a[j]]++;
            // cout<<conflicts[i][j]<<" ";
        }
        // cout<<endl;
    }
    for(int i=1;i<=n;i++)
    {    dp[1][i] = conflicts[1][i];
    // cout<<dp[1][i]<<" ";
    }
    // cout<<endl;
    // cout<<dp[1][n]<<" ";
    for(int tb=2;tb<=tables;tb++)
    {
        for(int j=1;j<=n;j++)
        {
            dp[tb][j] = 1e9;
            for(int k=1;k<j;k++)
            {
                dp[tb][j] = min(dp[tb][j],dp[tb-1][k] + conflicts[k+1][j]);
                // cout<<dp[tb][j]<<" ";
            }
            // if(tb<n)
            // cout<<endl;
        }
        // if(tb<n)
        // cout<<endl;
    }
    int ans = 1e9;
    for(int tb=1;tb<=tables;tb++)
    {
        // if(tb<n)
        // cout<<tb<<":"<<dp[tb][n]+k*tb<<" ";
        ans = min(ans,dp[tb][n]+k*tb);
    }
    cout<<ans<<endl;
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