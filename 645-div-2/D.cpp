#include<bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define pb push_back 
typedef long long ll;
int main()
{
    // int t;cin>>t;
    // while(t--)
    {
        int n,x;
        cin>>n>>x;
        vi a(n);
        for(int i=0;i<n;i++)
            cin>>a[i];
        vector<ll> c ={0},d={0};
        for(int i=0;i<n;i++)
        {
            c.pb(c.back()+a[i]);
        }
        for(int i=0;i<n;i++)
        {
            d.pb(d.back()+1ll*a[i]*(a[i]-1)/2);
        }
        ll ans = 0;
        for(int i=0;i<n;i++)
        {
            if(c[i+1]>=x){
                int z = upper_bound(c.begin(),c.end(),c[i+1]-x)-c.begin();
                int days = d[i+1]-d[z];
                ll curr = c[i+1]-c[z];
                int too = x-days;
                curr += (a[z-1]*(a[z-1]-1))/2;
                curr -= ((a[z-1]-too)*(a[z-1]-too-1)/2);
                ans = max(curr,ans);
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}