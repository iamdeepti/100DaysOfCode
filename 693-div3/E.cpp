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
bool comp(pair<pii,int> x, pair<pii,int> y)
{
    return x.ff.ff < y.ff.ff;
}
void solve()
{
    int n; cin>>n; 
    int h,w;
    vector<vi> a;
    loop(i,0,n)
    {
        cin>>h>>w;
        a.pb({min(h,w),max(h,w),i+1});
    }
    sort(all(a));
    set<vi> st; 
    vi ans(n);
    int curr = 0;
    loop(i,0,n)
    {
        while(a[curr][0]<a[i][0])
            st.insert({a[curr][1],a[curr][2]}), curr++;
        if(st.empty())
            ans[a[i][2]-1] = -1;
        else
        {
            vi tmp = *st.begin();
            if(tmp[0]<a[i][1])
                ans[a[i][2]-1] = tmp[1];
            else
            {
                ans[a[i][2]-1] = -1;
            }
            
        } 
    }
    print(ans);
}
int32_t main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0); 
    int t = 1;
    cin >> t;
    while (t--) solve();
 
    return 0;
}


