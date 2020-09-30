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
    int n,k;
    cin>>n>>k;
    vector<int> a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    // dp[i][j] = 1 iff subset of A[1...i] has a xor equal to j
    vector<int> dp(1024,0);
    // Base casee
    dp[0]=1;
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<1024;j++)
        {
            dp[j] = (dp[j]||(dp[j^a[i-1]]));
            // if(dp[j])
            // cout<<j<<" ";
        }
        // cout<<endl;
    } 
    
    int ans = k;
    
    for(int j=0;j<1024;j++)
    {
        
        {
            ans =  max(ans,dp[j]*(k^j));
        }
    }
    dp.clear();
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
