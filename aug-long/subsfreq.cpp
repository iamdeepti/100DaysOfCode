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
vector<ll> pow2(500001),fact(500001);
vector<vector<ll>>C;
ll mod =1e9+7;
//nCr +nCr-1 is n+1Cr
void fill(int N)
{
    // C[1][1]=1,C[1][0]=1;
    C.resize(N+1,vector<ll>(N+1,1));
    C[1][0]=1,C[1][1]=1;
    for(int n=2;n<=N;n++)
    {
        ll prev=1;
        for(int r=1;r<n;r++)
        {
            // ll temp = C[r];
            C[n][r] = (C[n-1][r-1]%mod+C[n-1][r]%mod)%mod;
            // prev = temp;
            // cout<<n<<"C"<<r<<":"<<C[n][r]<<" ";
        }
        // cout<<endl;
    }
    
}
// ll power(ll a,ll m)
// {
//     a = a%mod;
//     if(m==0)
//         return 1;
//     if(m==1)
//         return a;
//     ll res = power(a,m/2)%mod;
//     if(m&1)
//         return (((res*res)%mod)*a)%mod;
//     return (res*res)%mod;
// }
// ll C(int n,int r)
// {
//     ll N = 1ll*n, R=1ll*r;
//     return (((fact[n])*power(fact[n-r],mod-2))%mod)*power(fact[r],mod-2)%mod;
// }
void solve()
{
    int n,hf=0;
    cin>>n;
    vi a(n),cnt(n+1);
    C.clear();
    
    bool t=true;
    
    for(int i=0;i<n;i++)
    {    
        cin>>a[i];
        cnt[a[i]]++;
        // if(cnt[a[i]]==1)
        //     nums++;
        if(cnt[a[i]]!=1)
            t = false;
        hf = max(hf,cnt[a[i]]);
    }
    
    // grt[n-1] = 0;
    ll ans=0;
    if(t){
        for(int i=1;i<=n;i++)
        {
            // ans = (ans pow2[n-a[i]])%mod;
            cout<<pow2[n-i]<<" ";
        }
        cout<<endl;
        return;
    }
    fill(hf);
    vector<vector<ll>> dp(n+1,vector<ll>(n+1,1)),dp2;
    dp2=dp;
    //dp[i][j] --> no of subsequence having frequency less than j and greatest 
    //element less than  equal to i
    for(int freq=1;freq<=n;freq++)
    {
        for(int j=1;j<=n;j++)
        {
            // if(cnt[j]>=i)
            {
                int r = min(freq-1,cnt[j]);
                dp[j][freq] = (((C[cnt[j]][r])*(pow2[r]-1+mod)%mod)%mod+1)%mod;
                if(j>1)
                    dp[j][freq] = (dp[j][freq]*dp[j-1][freq])%mod;  
            }
        }
    }
    //dp2[i][j] -->subsequence having frequency <= j and smallest element = i
    for(int freq=0;freq<=n;freq++)
    {
        for(int j=n;j>=1;j--)
        {
            // if(cnt[j]>=i)
            {
                int r = min(freq,cnt[j]);
                dp2[j][freq] = ((C[cnt[j]][r]*(pow2[r]-1+mod)%mod)%mod+1)%mod;
                if(j<n)
                    dp2[j][freq] = (dp2[j][freq]*dp2[j+1][freq])%mod;  
            }
        }
    }
    // for(int i=1;i<=n;i++)
    // {
    //     for(int j=1;j<=n;j++)
    //         cout<<dp[i][j]<<" ";
    //     cout<<endl;
    // }
    ans=0;
    
    for(int i=1;i<=n;i++)
    {
        ans = 0;
        for(int k=1;k<=cnt[i];k++)
        {
            if(i==n)
                ans = (ans+(C[cnt[i]][k]*dp[i-1][k])%mod)%mod;
            else
                ans = (ans+(C[cnt[i]][k]*(dp2[i+1][k]*dp[i-1][k])%mod)%mod)%mod;
            // cout<<C(cnt[i],k)<<" "<<k<<" "<<cnt[i]<<" ";
        }
         cout<<ans<<" ";
    }
    cout<<endl;
}
int main()
{
    ios_base:: sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    int t;
    cin>>t;
    pow2[0]=1;fact[0]=1;
    for(int i=1;i<=500000;i++)
    {
        pow2[i] = (pow2[i-1]*2)%mod;
        fact[i] = (i*fact[i-1])%mod;
    }
    while(t--)
    {
        solve();
    }
    return 0;
}
