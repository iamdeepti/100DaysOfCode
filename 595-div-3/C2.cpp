#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll pow3(ll x)
{
    ll ans = 1;
    for(int i=1;i<=x;i++)
        ans *= 3;
    return ans;
}
void solve()
{
    ll n;
    cin>>n;
    ll ans = n, curr = 0,count=0;
    while(n)
    {
        curr += (n%3)*pow3(count);
        count++;
        // cout<<endl;
        // cout<<curr<<" "<<ans<<" "<<n<<" "<<count<<endl;
        
        if((n%3) == 2)
        {
            ans = ans - curr + pow3(count);
            n = n+1;
            curr = 0;
        }
        // cout<<curr<<" "<<ans<<" "<<n<<" "<<count<<endl;
        // cout<<endl;
        n = n/3;
    }
    cout<<ans<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}