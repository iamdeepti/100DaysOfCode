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
 
#define bug(...)        __f (#__VA_ARGS__, __VA_ARGS__)
 
 
template <typename Arg1>
void __f (const char* name, Arg1&& arg1) { cout << name << " : " << arg1 << endl; }
template <typename Arg1, typename... Args>
void __f (const char* names, Arg1&& arg1, Args&&... args)
{
    const char* comma = strchr (names + 1, ',');
    cout.write (names, comma - names) << " : " << arg1 << " | "; __f (comma + 1, args...);
}
 
void print( vector<int> &vec )
{
    int n = vec.size();
    if ( n == 0 )
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
        for (auto &i : vec) cout << i << " ";
        cout << endl;
    }
}
void solve()
{
    int n;  cin>>n;
    vector<int> a(n);
    loop(i,0,n) cin>>a[i];
    vi left(n), right(n);
    left[0] = a[0]; right[n-1] = a[n-1];
    loop(i,1,n) left[i] = max(left[i-1],a[i]);
    rloop(i,n-2,0)  right[i] = max(right[i+1],a[i]);
    vi maxplaces;
    int mx = *max_element(all(a));
    loop(i,0,n)
    {
        if(a[i]==mx)    maxplaces.pb(i);
    }
    int lo = maxplaces[sz(maxplaces)/2];
    int hi =  lo;
    while(true)
    {
        if(lo==0 || hi == n-1)
        {
            cout<<"NO"<<endl;
        }
        if(left[lo-1]==mx && right[hi+1]==mx)
        {
            cout<<"YES"<<endl;
            cout<<lo<<" "<<hi-lo+1<<""<<n-hi-1<<endl;
            return;
        }
        
    }

}
int32_t main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
#ifndef ONLINE_JUDGE
    freopen("input.txt",  "r",  stdin);
    freopen("output.txt", "w", stdout);
#endif
 
    int t = 1;
    cin >> t;
    while (t--) solve();
 
    return 0;
}


