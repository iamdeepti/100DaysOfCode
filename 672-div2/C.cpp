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
    int n,q;
    cin>>n>>q;
    vector<int> a(n);
    for(int i=0;i<n;i++)    cin>>a[i];
    int i=0;
    while(i+1<n && a[i]<=a[i+1])   i++;
    int k = 0;
    int ans = a[i],res=a[i];
    // cout<<endl;
    // cout<<i<<" ";
    while(i<n)
    {
        // ans += a[i];
        i++;
        if(!k)
        {
            while(i+1<n && a[i]>=a[i+1]) i++;
            if(i<n)
            ans -= a[i];
            k = k^1;
        }
        else{
            while(i+1<n && a[i]<=a[i+1]) i++;
            if(i<n)
            ans += a[i];
            k = k^1;
        }
        // cout<<i<<" ";
        res = max(ans,res);
    }
    // cout<<endl;
    cout<<res<<endl;
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
