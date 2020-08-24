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
vector<ll> fact(1000001);
void solve()
{
    ll n;
    cin>>n;
    ll ans = 2;
    int mod = 1e9+7;
    for(ll j=4;j<=n;j++)
    {
        ans = ((ans*j)%mod + (((fact[j-1]-ans+mod)%mod)*(j-2))%mod)%mod;
    }
    cout<<ans<<endl;
}
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    // int t;
    // cin>>t;
    fact[0]=1;
    int mod = 1e9+7;
    for(int i=1;i<=1000000;i++)
        fact[i] = (fact[i-1]*i)%mod;
    // while(t--)
    {
        solve();
    }
    return 0;
}
