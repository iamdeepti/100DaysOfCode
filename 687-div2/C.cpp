#include<bits/stdc++.h>
using namespace std;

#define int long long
#define ff first
#define ss second
#define pb push_back
#define mk make_pair
#define pii pair<int,int>
void solve()
{
    int n, p, k;    cin>>n>>p>>k;
    string a;  
    cin>>a;
    int x, y;   cin>>x>>y;
    vector<int> dp(n);
    for(int i=n-1;i>=0;i--)
    {
        
        
        if(i+k>=n)
        {
            dp[i] = (a[i]=='1')?0:x;
        }
        else
        {
            dp[i] = (a[i]=='1')?dp[i+k]:x+dp[i+k];
        }
        // cout<<dp[i]<<" ";
        
    }
    int ans = INT_MAX;
    for(int i=0;i<n;i++)
    {
        if(i+p-1<n)
        ans = min(i*y + dp[i+p-1],ans);
    }
    cout<<ans<<endl;
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
