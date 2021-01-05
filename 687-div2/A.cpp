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
    int n,m,r,c;    cin>>n>>m>>r>>c;
    int ans = 0;
    ans = max(max(abs(r-1)+abs(c-1),abs(r-1)+abs(c-m)),max(abs(r-n)+abs(c-1),abs(r-n)+abs(c-m)));
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
