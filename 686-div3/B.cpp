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
    return a.f<b.f;
}
void solve()
{
    int n; cin>>n;
    vector<pii> a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i].f;
        a[i].s = i+1;
    }
    sort(a.begin(),a.end(),comp);
    int i=0;
    while(i<n)
    {
        if(a[i].f !=a[(i+1)].f || i==n-1)
        {
            cout<<a[i].s<<endl;
            return;
        }
        while(i+1<n && a[i].f==a[i+1].f) i++;
        i++;
    }
    cout<<"-1"<<endl;
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
