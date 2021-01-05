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
const int N = 4e3+20;
int dp[N][N];
int rec(int sum1, int i, int n, int k, vi &h, int suff)
{
    if(sum1>=k && suff-sum1>=k)
    {
        return n-i-1;
    }
    if(i==-1)
        return INT_MAX;
    suff += h[i];
    if(dp[i][sum1]!=-1)
        return dp[i][sum1];
    dp[i][sum1] = min(rec(min(sum1+h[i],suff-sum1-h[i]),i-1,n,k,h,suff),rec(min(sum1,suff-sum1),i-1,n,k,h,suff)); 
    return dp[i][sum1];
    
}
void solve()
{
    int n, k;   cin>>n>>k;
    vi h(n);
    loop(i,0,n) cin>>h[i];
    sort(all(h));
    if(n==1)
    {
        cout<<-1<<endl;
        return;
    }
    loop(i,0,N)
    {
        loop(j,0,N)
            dp[i][j] = -1;
    }
    int ans = rec(0,n-1,n,k,h,0);
    if(ans==INT_MAX)
    {
        cout<<-1<<endl;
        return;
    }
    cout<<ans<<endl;
}
int32_t main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--) solve();
 
    return 0;
}