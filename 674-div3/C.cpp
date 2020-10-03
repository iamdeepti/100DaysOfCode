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
    int x = sqrt(n);
    int ans = (x-1);
    n -= x;
    ans += (n+x-1)/x;
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
