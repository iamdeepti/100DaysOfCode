// Author - Deepti Singh
// Created: 27 Jan 21, Wednesday   08:43:12 pm
// Last modified: 30 Jan 21, Saturday   11:10:41 am
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
    int n, m; cin>>n>>m;
    vector<pii> a(n);
    loop(i,0,n) cin>>a[i].ff;
    loop(i,0,n) cin>>a[i].ss;
    vi one,two;
    loop(i,0,n)
    {
        if(a[i].ss==1)  one.pb(a[i].ff);
        else two.pb(a[i].ff);
    }
    sort(all(one)); sort(all(two));
    int i = sz(one)-1,j=sz(two)-1, ans = 0;
    while(m>0 && i>=0 && j>=0)
    {
        if(one[i]>=m || (i>=1 && one[i]+one[i-1]>two[j]))
        {
            m -= one[i];
            i--;
            ans++;
        }
        else{
            m -= two[j];
            j--;
            ans += 2;
        }
    }
    while(m>0 && i>=0)
    {
        m -= one[i];
        i--;
        ans++;
    }
    while(m>0 && j>=0)
    {
        m -= two[j];
        j--;
        ans+=2;
    }
    if(m>0){
        cout<<-1<<endl; return;
    }
    cout<<ans<<endl;
}
int32_t main()
{
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t = 1;
    cin >> t;
    while (t--) solve();

    return 0;
}



