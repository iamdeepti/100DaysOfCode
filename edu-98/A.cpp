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
    int x,y; cin>>x>>y;
    if(abs(x-y)<=1)
    {
        cout<<x+y<<endl;
        return;
    }
    int p = max(x,y)-min(x,y);
    cout<<p-1+x+y<<endl;
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
