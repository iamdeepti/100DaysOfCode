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
    int n; cin>>n;
    vector<int> H(n),K(n);
    for(int i=0;i<n;i++)
    {
        cin>>H[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>K[i];
    }
    vector<int> dp(1001,2000);
    dp[0]=0;
    for(int i=1;i<=1000;i++)
    {
        for(auto u: K)
        {
            if(i>=u)
            {
                dp[i] = min(dp[i-u]+1,dp[i]);
            }
        }
    }
    int ans = 0;
    for(auto u: H)
    {
        ans += dp[2*u];
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
