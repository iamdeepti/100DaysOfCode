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
    int n,k ; cin>>n>>k;
    vector<int> a(n);
    for(int i=0;i<n;i++)    cin>>a[i];
    int x = min_element(a.begin(),a.end())-a.begin();
    int ans = 0;
    for(int i=0;i<n;i++)
    {
        int u = a[i];
        if(u<k && a[x]<k && i!=x)
        ans += (k-u)/a[x];
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
