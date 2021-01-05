#include<bits/stdc++.h>
using namespace std;

#define int long long
#define f first
#define s second
#define pb push_back
#define mk make_pair
#define pii pair<int,int>
const int N = 2e5+1;
int pow2[N]={0};
int num[N]={0};
int mod = 998244353 ;
void solve()
{
    int n; cin>>n;
    // cout<<num[n]<<" "<<pow2[n]<<" ";
    cout<<((num[n])*pow2[n])%mod<<endl;
}
int pow_(int a,int m)
{
    int res=1;
    while(m)
    {
        if(m&1)
        {
            res = (res*a)%mod;
        }
        m = (m>>1);
        a = (a*a)%mod;
    }
    return res%mod;
}
int32_t main()
{
    // int t;	cin>>t;
    num[1]=1;
    num[2]=1;
    int p = pow_(2,mod-2);
    
    pow2[0]=1;
    for(int i=1;i<N;i++)
    {
        pow2[i] = ((pow2[i-1])*p) %mod;
    }
    for(int i=3;i<N;i++)
    {
        num[i] = (num[i-1]+num[i-2])%mod;
    }
    // while(t--)
    {
        solve();
    }
    return 0;
}
