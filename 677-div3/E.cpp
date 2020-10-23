#include<bits/stdc++.h>
using namespace std;

#define int long long
#define f first
#define s second
#define pb push_back
#define mk make_pair
#define pii pair<int,int>
int fact[21];
void solve()
{
    int n; cin>>n;
    int ans = ((fact[n])/(fact[n/2]*fact[n/2])*fact[n/2-1]*(fact[n/2-1]))/2;
    cout<<ans<<endl;
}

int32_t main()
{
    // int t;	cin>>t;
    fact[0]=1;
    for(int i=1;i<=20;i++)
        fact[i] = fact[i-1]*i;
    // while(t--)
    {
        solve();
    }
    return 0;
}
