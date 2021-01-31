// Author - Deepti Singh
// Created: 5 Jan 21, Tuesday   05:29:15 pm
// Last modified: 7 Jan 21, Thursday   08:03:48 pm
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
void solve()
{
    int n, m;   cin>>n>>m;
    vi a(n), b(m);
    loop(i,0,n) cin>>a[i];
    loop(i,0,m) cin>>b[i];
    set<int> st,p; 
    st.insert(0);
    p.insert(0);
    while(!st.empty())
    {
        int x = *st.begin();
        st.erase(x);
        loop(i,0,n)
        {
            if(p.find(x|a[i])==p.end())
            {
                st.insert(x|a[i]);
                p.insert(x|a[i]);
            }
        }
        loop(i,0,m)
        {
            if(p.find(x&b[i])==p.end())
            {
                st.insert(x&b[i]);
                p.insert(x&b[i]);
            }
        }
    }
    // print(p);
    cout<<sz(p)<<endl;
}
int32_t main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--) solve();

    return 0;
}