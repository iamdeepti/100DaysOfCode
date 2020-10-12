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
    int n,k; cin>>n>>k;
    vector<int> a(n);
    for(int i=0;i<n;i++)    cin>>a[i];
    int p = count(a.begin(),a.end(),0);
    if(p==n)
    {
        cout<<0<<endl;
        return;
    }
    sort(a.begin(),a.end());
    int sum = 0;
    for(int i=n-2;i>n-2-k;i--)
    {
        sum += a[i];
    }
    cout<<sum + a[n-1]<<endl;
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
