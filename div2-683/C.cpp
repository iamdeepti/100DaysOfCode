#include<bits/stdc++.h>
using namespace std;

#define int long long
#define f first
#define s second
#define pb push_back
#define mk make_pair
#define pii pair<int,int>
bool comp(pii a, pii b)
{
    return a.f< b.f;
}
void solve()
{
    int n, w; cin>>n>>w;
    vector<pii> a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i].f;
        a[i].s = i+1;
    }
    sort(a.begin(),a.end());
    int sum = 0;
    vector<int> ans;
    for(int i=n-1;i>=0;i--)
    {
        if(sum + a[i].f > w)    continue;
        sum += a[i].f;
        ans.pb(a[i].s);
    }
    if(2*sum<w){
        cout<<"-1"<<endl;
        return;
    }
    cout<<ans.size()<<endl;
    for(auto x: ans)
        cout<<x<<" ";
    cout<<endl;
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
