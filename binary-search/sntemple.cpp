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
    vector<int> h(n);
    for(int i=0;i<n;i++) cin>>h[i];
    vector<int> l(n),r(n);
    int prev = 0,sum=0;
    l[0]=1;r[n-1]=1;
    for(int i=1;i<n;i++)
    {
        l[i] = min(h[i],l[i-1]+1);
        // cout<<l[i]<<" ";
        // prev = l[i];
        sum += h[i];

    }
    // cout<<endl;
    // prev = 0;
    for(int i=n-2;i>=0;i--)
    {
        r[i] = min(h[i],r[i+1]+1);
        // prev = r[i];
    }
    int res = 1e18;
    for(int i=0;i<n;i++)
    {
        // cout<<r[i]<<" ";
        int k = min(h[i],r[i]);
        res = min(res,sum-k*k);
    }
    cout<<res<<endl;
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
