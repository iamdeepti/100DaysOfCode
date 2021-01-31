// Author - Deepti Singh
// Created: 30 Jan 21, Saturday   11:16:26 am
// Last modified: 30 Jan 21, Saturday   12:37:53 pm
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

int pow(int a, int m, int mod)
{
    if(m==0)    return 1;
    if(m==1)    return a%mod;
    int res = pow(a,m/2,mod);
    if(m&1) return (((res*res)%mod ) *a)%mod;
    return (res*res)%mod;
}
template <typename Arg1>
void __f (const char* name, Arg1&& arg1) { cout << name << " : " << arg1 << endl; }
template <typename Arg1, typename... Args>
void __f (const char* names, Arg1&& arg1, Args&&... args)
{
    const char* comma = strchr (names + 1, ',');
    cout.write (names, comma - names) << " : " << arg1 << " | "; __f (comma + 1, args...);
}
const int N = 1e3+1;
int mod = 1e9 +7;
int fact[N], ifact[N];
int C(int n,int r, int mod)
{
    return (fact[n]*((ifact[n-r]*ifact[r])%mod))%mod;
}
void FACT(int * fact, int n, int mod)
{
    fact[0]=1;
    loop(i,1,n) fact[i] = (fact[i-1]*i)%mod;
}
void INVFACT(int * ifact, int n, int mod)
{
    ifact[0]=1;
    loop(i,1,n) ifact[i] = (ifact[i-1]*pow(i,mod-2,mod))%mod;
}

int freq[1001], r[N];
void solve()
{
    int n, k; cin>>n>>k;
    vi a(n);
    loop(i,0,n) cin>>a[i];
    sort(all(a));
    mset(freq,0); mset(r,0);
    loop(i,0,n)   freq[a[i]]++;
    int ans = 1;
    set<int> st;
    loop(i,n-k,n)
    {
        r[a[i]]++;
        st.insert(a[i]);
    }
    for(auto x:st)
    {
        ans = (ans * C(freq[x],r[x],mod))%mod;
    }
    cout<<ans<<endl;
}
int32_t main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t = 1;
    cin >> t;
    FACT(fact,N,mod);   INVFACT(ifact,N,mod);
    while (t--) solve();
    return 0;
}



