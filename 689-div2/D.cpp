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
#define print(a)	    for(auto x:a) cout<<x<<" ";	cout<<endl
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
int n, q;
vi a, pre, sums;
vector<pii> queries;
void divide(int start,int end)
{
    if(end<start)   return;
    
    sums.pb(pre[end+1]-pre[start]);
    // if(start==end)  return;
    int val = (a[start]+a[end])/2;

    int mid = upper_bound(a.begin()+start,a.begin()+end+1,val)-a.begin();
    // bug(start,end,mid);
    // bug(pre[end+1]-pre[start]);
    if(mid-1==end || mid == start)    return;
    
    divide(start,mid-1);
    divide(mid,end);
}
void solve()
{
    
    cin>>n>>q;
    a.clear(); a.resize(n);
    pre.clear(); pre.resize(n+1); sums.clear();
    loop(i,0,n)
    { 
        cin>>a[i];
        // pre[i+1] = pre[i]+a[i];
    }
    sort(all(a));
    loop(i,0,n)
    { 
        // cin>>a[i];
        pre[i+1] = pre[i]+a[i];
    }
    queries.clear();    queries.resize(q);
    loop(i,0,q)
    {
        cin>>queries[i].ff;    queries[i].ss = i;
    }
    vector<string> res(q);
    // print(a);
    divide(0,n-1);
    sort(all(sums));
    loop(i,0,q)
    {
        if(binary_search(all(sums),queries[i].ff))
            res[queries[i].ss]="YES";
        else
        {
            res[queries[i].ss] = "NO";
        }
        
    }
    // print(sums);
    for(auto x:res)
    {
        cout<<x<<endl;
    }
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


