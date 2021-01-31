// Author - Deepti Singh
// Created: 15 Jan 21, Friday   12:28:31 pm
// Last modified: 23 Jan 21, Saturday   05:19:34 pm
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
string times(string s, int x)
{
    int k = 0;
    string res;
    loop(i,0,x)
    {
        res.pb(s[k]);
        k = (k+1)%sz(s);
    }
    return res;
}
void solve()
{
    string s, t;
    cin>>s>>t;
    int n = (sz(s)*sz(t))/__gcd(sz(s),sz(t));
    string x = times(s,n);
    string y = times(t,n);
    // bug(x,y);
    loop(i,0,n)
    {
        if(x[i]!=y[i])
        {
            cout<<"-1"<<endl;
            return;
        }
    }
    cout<<x<<endl;
}
int32_t main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--) solve();

    return 0;
}



