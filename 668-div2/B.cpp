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
    int n; cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++)
        cin>>a[i];
    int ans = 0,i=0,j=1;
    while(i<n)
    {
        while(i<n && a[i]<=0)    i++;
        
        if(i==n)    break;
        if(j<i) j=i+1;
        while(j<n && a[j]>=0)
        {
            j++;
        }
        if(j==n)    break;
        int k = min(a[i],-a[j]);
        a[j]+= k;
        a[i]-= k;
        
    }
     i=0;
     for(;i<n;i++)
     {
         if(a[i]>0)
            ans += a[i];
     }
    cout<<ans<<endl;
}
int32_t main()
{
    
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
