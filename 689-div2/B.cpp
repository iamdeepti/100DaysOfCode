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
#define print(a)	for(auto x:a) cout<<x<<" ";	cout<<endl
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
void solve()
{
    int n,m; cin>>n>>m;
    vector<vector<char>> a(n,vector<char>(m));
    loop(i,0,n)
    {
        loop(j,0,m)
            cin>>a[i][j];
    }
    vector<vi> dp(n,vi(m));
    loop(i,0,n){
        dp[i][0] = (a[i][0]=='*')?1:0; 
        dp[i][m-1]= (a[i][m-1]=='*')?1:0;
    }
    loop(i,0,m){
        dp[n-1][i]= (a[n-1][i]=='*')?1:0;
    }
    rloop(i,n-2,0)
    {
        rloop(j,m-2,1)
        {
            if(a[i][j]=='.')
            {
                dp[i][j]=0;
            }
            else if(a[i+1][j+1]=='*' && a[i+1][j-1]=='*' && a[i+1][j]=='*')
            {
                dp[i][j] = 1+min(dp[i+1][j+1],min(dp[i+1][j-1],dp[i+1][j]));
            }
            else
            {
                dp[i][j] = 1;
            }
            
        }
    }
    int ans = 0;
    loop(i,0,n)
    {
        loop(j,0,m)
        {
            ans += dp[i][j];
        }
    }
    // loop(j,0,n)
    //  {   Print(dp[j],0,m);}
    cout<<ans<<endl;
}
int32_t main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
//#ifndef ONLINE_JUDGE
//    freopen("input.txt",  "r",  stdin);
//    freopen("output.txt", "w", stdout);
//#endif
 
    int t = 1;
    cin >> t;
    while (t--) solve();
 
    return 0;
}


