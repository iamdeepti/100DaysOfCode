#include<bits/stdc++.h>
using namespace std;
#define forn(i,n) for(int i=0;i<n;i++)
typedef long long ll;
const int inf = 1e9;
int main()
{
    int n;
    cin>>n;
    vector<int> a(n);
    forn(i,n)
        cin>>a[i];
    ll ans = 0;
    forn(mx,31)
    {
        ll curr = 0,best=0;
        forn(i,n)
        {
            ll val = (a[i]>mx)?-inf:a[i];
            curr += val;
            best = min(best,curr);
            ans = max(ans,curr-mx-best);
            // cout<<curr<<" "<<best<<" "<<ans<<" "<<mx<<endl;
        }
    }
    cout<<ans<<endl;
}