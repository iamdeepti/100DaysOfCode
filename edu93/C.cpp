#include<bits/stdc++.h>
 
using namespace std;
 
#define ll long long 
#define ld long double
#define f first
#define s second
#define pii pair<int,int>
#define pb push_back
#define mk make_pair
#define vi vector<int>
void solve()
{
    int n;
    cin>>n;
    string a;
    cin>>a;
    vi pre(n);
    map<ll,ll> mp;
    mp[0]=1;
    for(int i=0;i<n;i++)
    {
        pre[i] = a[i]-'0';
        if(i)   pre[i]+=pre[i-1];
        // cout<<pre[i]<<" ";
        mp[pre[i]-i-1]++;
    }
    // cout<<endl;
    ll ans=0;
    for(auto x:mp)
    {
        // cout<<x.f<<":"<<x.s<<endl;
        ans += (x.s*(x.s-1))/2;
    }
    cout<<ans<<endl;
}
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
