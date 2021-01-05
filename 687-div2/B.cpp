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
    int n, k;   cin>>n>>k;
    vector<int> a(n);
    for(int i=0;i<n;i++)    cin>>a[i];
    int ans = INT_MAX;
    for(int c=1;c<=100;c++)
    {
        int i=0, cnt=0;
        while(i<n)
        {
            // cout<<i<<" ";
            while(i<n && a[i]==c)   i++;
            if(i>=n) break;
            cnt++;
            i += k;
        }
        ans = min(ans,cnt);
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
