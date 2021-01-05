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
 
#define print(a)        for (auto x : a) cout << x << " "; cout << endl
#define Print(a,x,y)    for (int i=x; i<y; i++) cout<< a[i]<< " "; cout << endl

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
    int n,  x;  cin>>n>>x;
    vi a(n);
    int j = -1;
    loop(i,0,n)
    {
        cin>>a[i];
        if(i&& a[i]<a[i-1])
        {
            j = i;
        }
    }
    // if(j==-1)
    // {
    //     cout<<0<<endl;
    //     return;
    // }
    int ans = 0;
    loop(i,0,n)
    {
        if(i>j) break;
        if(a[i]<=x)  continue;
        // cout<<a[i]<<" & "<<x<<"\t";
        swap(a[i],x);
        ans++;
    }
    loop(i,1,n)
    {
        if(a[i]<a[i-1])
        {
            cout<<-1<<endl; return;
        }
    }
    cout<<ans<<endl;
    
}
int32_t main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
 
// #ifndef ONLINE_JUDGE
//     freopen("input.txt",  "r",  stdin);
//     freopen("output.txt", "w", stdout);
// #endif
 
    int t = 1;
    cin >> t;
    while (t--) solve();
 
    return 0;
}


