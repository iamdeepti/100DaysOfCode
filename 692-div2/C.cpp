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
const int N = 1e5+1;
int p[N], r[N];
int getParent(int x)
{
    if(p[x]!=x)
        p[x] = getParent(p[x]);
    return p[x];
}
void Union(int x,int y)
{
    int px = getParent(x);
    int py = getParent(y);
    if(r[x]>r[y])
    {
        p[y] = px;
    }
    else if(r[x]<r[y])
    {
        p[x] = py;
    }
    else
    {
        p[x] = py;
        r[x] += r[y];
    }
    
}
void solve()
{
    int n,m;
    cin>>n>>m;
    loop(i,1,n+1) p[i]=i, r[i]=1;
    int x,y;
    int cycle=0, lp=0;
    loop(i,0,m)
    {
        cin>>x>>y;
        int px = getParent(x);
        int py = getParent(y);
        if(x==y)   lp++;
        else if(px==py)
        {
            cycle++;
            // bug(x,y);
        }
        else
        {
            Union(x,y);
        }
        
    }  
    
    // bug(cycle,lp);
    cout<<m-lp+cycle<<endl;
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


