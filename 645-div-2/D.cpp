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
        int n;
        ll x;
        cin>>n>>x;
        vector<ll> a(2*n);
        for(int i=0;i<n;i++)
        {    
            cin>>a[i];
            a[n+i] = a[i];
        }
        n = 2*n;
        vector<ll> c ={0},d={0};
        for(int i=0;i<n;i++)
        {
            c.pb(c.back()+a[i]);
        }
        for(int i=0;i<n;i++)
        {
            d.pb(d.back()+(a[i]*(a[i]+1))/2);
        }
        ll ans = INT_MIN;
        for(int i=0;i<n;i++)
        {
            if(c[i+1]>=x){
                int z = upper_bound(c.begin(),c.end(),c[i+1]-x)-c.begin();
                ll days = c[i+1]-c[z];
                ll curr = d[i+1]-d[z];
                int too = x-days;
                curr += (a[z-1]*(a[z-1]+1))/2;
                curr -= ((a[z-1]-too)*(a[z-1]-too+1))/2;
                ans = max(curr,ans);
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}