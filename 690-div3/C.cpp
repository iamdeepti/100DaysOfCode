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
    int n; cin>>n;
    vi a;
    int used[10]={0};
    while(n)
    {
        bool placed = false;
        // if(n<=9)
        {
            rloop(i,min(n,1ll*9),0)
            {
                if(!used[i])
                {
                    a.pb(i);
                    used[i]++;
                    n -= i;
                    placed = true;
                    break;
                }
            }
            if(!placed)
            {
                cout<<"-1"<<endl;
                return;
            }
        }
    }
    reverse(all(a));
    if(a[0]==0)
        swap(a[0],a[1]);
    loop(i,0,sz(a))
        cout<<a[i];
    cout<<endl;
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


