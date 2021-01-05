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
    int n, c0, c1, h;   cin>>n>>c0>>c1>>h;
    string str;   cin>>str;
    int ans = 0;
    for(auto x: str)
    {
        if(x=='0')
        {
            ans += min(c0,c1+h);
        }
        else
        {
            ans += min(c1,c0+h);
        }
        
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
