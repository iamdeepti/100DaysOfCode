// Author - Deepti Singh
// Created: 11 Jan 21, Monday   12:45:07 pm
// Last modified: 11 Jan 21, Monday   02:04:33 pm
// Institution - DTU
// email - iamdeepti956@gmail.com
#include <bits/stdc++.h>
using namespace std;
 
#define int             long long int
#define ff              first
#define ss              second
#define pb              push_back
 
#define vi              vector <int>
#define pii             pair <int, int>
 
#define loop(i,s,e)     for(int i=s;i<e;i++)
#define rloop(i,e,s)    for(int i=e;i>=s;i--)
#define mset(a,f)       memset(a,f,sizeof(a))
 
#define endl            "\n"
#define sz(x)           ((int) x.size())
#define all(p)          p.begin(), p.end()
#define print(a)		for(auto x:a) cout<<x<<" ";	cout<<endl
#define Print(a,s,e)	for(int i=s; i<e; i++) cout<<a[i]<<" ";	  cout<<endl 
#define bug(...)        __f (#__VA_ARGS__, __VA_ARGS__)
 

template <typename Arg1>
void __f (const char* name, Arg1&& arg1) { cout << name << " : " << arg1 << endl; }
template <typename Arg1, typename... Args>
void __f (const char* names, Arg1&& arg1, Args&&... args)
{
    const char* comma = strchr (names + 1, ',');
    cout.write (names, comma - names) << " : " << arg1 << " | "; __f (comma + 1, args...);
}
const int N = 1e5+20;
int fact[N];
int factinv[N];
int mod = 998244353; 
int power(int a,int m)
{
    if(m==0)    return 1;
    if(m==1)    return a%mod;
    int ans = power(a,m/2);
    if(m&1)
        return (((ans*ans)%mod)*(a%mod))%mod;
    return (ans*ans)%mod;
}
void solve()
{
    int m,n,k; cin>>m>>n>>k;
    int ans = 0,term=0;
    int powk = 1;
    loop(i,1,n+1)
    {
        // term = i*fact[n-1]*factinv[n-i]*factinv[i]*k*power(k-1,i-1);
        term = (((fact[n-1]*factinv[n-i])%mod)*factinv[i-1])%mod;
        // bug(i);
        // bug(term);
        term = (term * i)%mod;
        // bug(term);
        term = (((term * k)%mod) * powk)%mod;
        powk = ((powk)*(k-1))%mod;
        ans = (ans+term)%mod;
        // bug(term);
    }
    // bug(ans);
    term = power(k,n);
    // bug(term);
    term = power(term,mod-2);
    
    ans = (ans*term)%mod;
    cout<<ans<<endl;
}
int32_t main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t = 1;
    // cin >> t;
    fact[0] = 1;
    factinv[0]=1;
    loop(i,1,N)
    {
        fact[i] = (fact[i-1]*i)%mod;
    }
    loop(i,1,N)
    {
        factinv[i] = (factinv[i-1]*power(i,mod-2))%mod;
    }
    while (t--) solve();

    return 0;
}



