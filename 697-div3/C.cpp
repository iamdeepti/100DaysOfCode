// Author - Deepti Singh
// Created: 27 Jan 21, Wednesday   08:45:51 pm
// Last modified: 27 Jan 21, Wednesday   11:44:22 pm
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
const int N = 2e5+1;
int freqa[N],freqb[N];
void solve()
{
    int a,b,k; cin>>a>>b>>k;
    vector<pii> p(k);
    mset(freqa,0); mset(freqb,0);
    loop(i,0,k) cin>>p[i].ff;
    loop(i,0,k) cin>>p[i].ss;
    for(auto x:p)
    {
        freqa[x.ff]++; freqb[x.ss]++;
    }
    int ans = 0;
    for(auto x:p)
    {
        ans += (k-freqa[x.ff]-freqb[x.ss]+1);
    }
    cout<<ans/2<<endl;
}
int32_t main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--) solve();

    return 0;
}



