#include<bits/stdc++.h>
using namespace std;

#define int long long
#define ff first
#define ss second
#define pb push_back
#define mk make_pair
#define pii pair<int,int>
#define vi vector<int>
void solve()
{
    int n; cin>>n;
    vector<int> a(n);
    map<int,vector<int>> mp;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        mp[a[i]].pb(i);
    }
    int ans = INT_MAX;
    for(auto x: mp)
    {
        vi b = x.ss;
        int l = 0,r =0,curr=0;
        for(auto i:b)
        {
            r = i-1;
            if(r-l>=0)
            {
                curr++;
            }
            l = i+1;
        }
        r = n-1;
        if(r-l>=0)  curr++;
        ans = min(curr,ans);
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
