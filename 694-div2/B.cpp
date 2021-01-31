// Author - Deepti Singh
// Created: 5 Jan 21, Tuesday   08:03:41 pm
// Last modified: 5 Jan 21, Tuesday   08:31:06 pm
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
    int n,x;  cin>>n>>x;
    vi a(n);
    loop(i,0,n)
    {
        cin>>a[i];
    }
    queue<pii> q;
    loop(i,0,n)
        q.push({a[i],1});
    int curr = a[0], sum=0;
    while(!q.empty())
    {
        int freq = q.front().ss;
        curr = q.front().ff;
        sum += curr*freq;
        q.pop();
        if(curr%x != 0)
            break;
        q.push({curr/x,freq*x});
    }
    while(!q.empty())
    {
        sum += (q.front().ff*q.front().ss);
        q.pop();
    }
    cout<<sum<<endl;
}
int32_t main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--) solve();

    return 0;
}



