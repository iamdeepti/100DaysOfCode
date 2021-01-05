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
// void solve()
// {
// }
// int32_t main()
// {
//     ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
// //#ifndef ONLINE_JUDGE
// //    freopen("input.txt",  "r",  stdin);
// //    freopen("output.txt", "w", stdout);
// //#endif
 
//     int t = 1;
//     cin >> t;
//     while (t--) solve();
 
//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
int dp[51][31];
void solve()
{
    int n, k;  cin>>k>>n;
    vector<int> a(n),pre(n+1);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        pre[i+1] = a[i];
        pre[i+1] += pre[i];  
    }
    for(int i=0;i<=50;i++)
    {
        for(int j=0;j<=30;j++)
            dp[i][j] = INT_MAX;
    }
    dp[0][0]=0;
    for(int painter=1;painter<=k;painter++)
    {
        for(int i=1;i<=n;i++)
        {
            // bug(i);
            if(painter>i)   continue;
            for(int j=i;j<=n;j++)
            {
                int p = pre[j]-pre[i-1];
                // bug(p,j);
                dp[j][painter] = min(max(dp[i-1][painter-1],p),dp[j][painter]);
                // bug(dp[j][painter],j,painter);
            }
        }
    }
    // for(int j=1;j<=n;j++)
    // {
    //     bug(j);
    //     Print(dp[j],1,k+1);
    // }
    int ans = INT_MAX;
    for(int i=1;i<=k;i++)
    {
        // cout<<dp[n][i]<<" ";
        ans = min(dp[n][i],ans);
    }
    cout<<ans<<endl;
}
int32_t main()
 {
	//code
	int t;  cin>>t;
	while(t--)
	{
	    solve();
	}
	return 0;
}